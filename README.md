# SPQE-Opt: Solar-Powered Smart Power Quality & Energy Optimizer

An ESP32-based controller that combines MPPT solar charging with active power factor correction for MSMEs.

## Hardware
- ESP32 DevKit V1 (ESP32-WROOM-32)
- Current sensors: ACS712 (20A) for the solar/DC side, ACS712 or SCT-013 CT for the AC side
- Voltage sensors: ZMPT101B for AC mains, resistor divider (30k / 7.5k) for the DC solar side
- Solar panel: 12V, 20W polycrystalline panel
- Battery: 12V 7Ah sealed lead-acid
- MPPT stage: buck DC-DC converter (IRFZ44N MOSFET, Schottky diode, inductor), PWM-driven by the ESP32
- PFC stage: boost converter (MOSFET with gate driver, inductor, fast-recovery diode) with zero-crossing detection
- Loads: 12V DC load and an inductive AC load for power factor testing

## Setup
1. Clone the repo: `git clone https://github.com/deekshas0401-ui/SPQE-Opt.git`
2. Open `src/` in Arduino IDE or PlatformIO
3. Install the required libraries: Install the ESP32 board package in Arduino IDE (Boards Manager: "esp32 by Espressif Systems")
4. Set the pin mapping and calibration values in `config.h`
5. Upload to the ESP32

## Folder structure
- `docs/` – design document and architecture diagram
- `src/` – ESP32 firmware
- `data/` – sample sensor readings
- `tests/` – test cases

## License
MIT
