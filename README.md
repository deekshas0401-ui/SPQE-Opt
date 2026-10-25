spqe-opt/
├── README.md              # overview, hardware list, setup steps, environment/config variables
├── docs/
│   ├── design.md          # technical design document
│   └── architecture.png   # block diagram: solar panel → MPPT → battery/load, ESP32 sensing, PFC stage
├── src/                   # ESP32 firmware (MPPT, PFC control, sensing)
├── data/                  # sample sensor readings (CSV)
├── tests/                 # test cases, e.g. MPPT tracking and power factor results
└── LICENSE                # MIT is the usual choice for open source
