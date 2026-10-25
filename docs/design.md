# Technical Design

## Overview
SPQE-Opt combines MPPT solar charging and active power factor correction, controlled by an ESP32.

## Block diagram
Solar panel -> MPPT converter -> battery/load
AC load -> current/voltage sensing -> ESP32 -> PFC stage

## Control logic
- MPPT: perturb-and-observe tracking of the panel's maximum power point
- PFC: measure power factor and adjust the correction stage toward unity
- Monitoring: ESP32 logs voltage, current, power factor and power
