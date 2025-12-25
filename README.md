# Displaying 7-Segment Digits On OLED With STC8G1K17

## 📌 Proje Özeti / Project Overview
Bu proje, **STC8G1K17** mikrodenetleyicisi ve **SSD1306 128x64 OLED** ekran kullanarak, herhangi bir bitmap fonta bağlı kalmadan **dinamik olarak 7-segment tarzı rakamlar oluşturan** bir kütüphane ve örnek uygulamadır.

This project is a library and example application that **dynamically generates 7-segment style digits** without relying on any bitmap font, using the **STC8G1K17 microcontroller** and **SSD1306 128x64 OLED display**.

---

## ✨ Temel Özellikler / Key Features

### 🎯 Dinamik Rakam Oluşturma / Dynamic Digit Generation
- **Font Dosyası Gerekmez:** Rakamlar algoritmik olarak çizilir, harici font dosyası kullanılmaz.
- **Ölçeklenebilir:** İstenilen boyutta rakamlar oluşturulabilir (pixel cinsinden yükseklik ayarlanabilir).
- **Esnek Konumlandırma:** Rakamlar ekranın herhangi bir konumuna çizilebilir.

- **No Font File Required:** Digits are drawn algorithmically, no external font file needed.
- **Scalable:** Can generate digits at any desired size (height adjustable in pixels).
- **Flexible Positioning:** Digits can be drawn at any position on the screen.

### 🏗️ Teknik Detaylar / Technical Details
- **Bellek Kullanımı / Memory Usage:** ~4KB (optimize edilmiş algoritma / optimized algorithm)
- **Derleyici / Compiler:** SDCC (Small Device C Compiler)
- **IDE:** Code::Blocks
- **İletişim Protokolü / Communication:** I²C


### 🎯 Proje Amacı / Project Purpose
1. **Eğitici Örnek / Educational Example:** STC8G1K17 + SSD1306 kullanımı için pratik bir referans
2. **Kütüphane / Library:** Kullanıcıların kendi projelerinde kullanabileceği yeniden kullanılabilir kod
3. **Algoritma Gösterimi / Algorithm Demonstration:** Dinamik grafik oluşturma tekniklerinin gösterimi


### Derleme Adımları
- Projeyi indirin ve CodeBlocks IDE'sini açın.
- Proje dosyası üzerine sağ tıklayın.
- Açılan menüden 'Build Options...' seçeneğini seçin.
- Açılan pencereden derleyici olarak 'Small Device C Compiler' seçin.
- Ana pencerede bulunan derleme butonuna (⚙️ veya Build) tıklayarak projeyi derleyin.


### Compiler Steps
- Download the project and open it in CodeBlocks IDE.
- Right-click on the project file.
- From the context menu, select 'Build Options...'.
- In the new window, choose 'Small Device C Compiler' as the compiler.
- Click the build button (⚙️ or Build) in the main window to compile the project.


---

## 🛠️ Donanım Bağlantıları / Hardware Connections

### Gerekli Bileşenler / Required Components
- **Mikrodenetleyici / MCU:** STC8G1K17
- **Ekran / Display:** 0.96" SSD1306 128x64 OLED (I²C arayüzü)
- **Programlama Adaptörü / Programming Adapter:** FTDI - FT232RL USB To TTL(UART)
- **Bağlantı / Connection:** Breadboard ve jumper kablolar

### Bağlantı Şeması / Connection Diagram

| OLED Pin | STC8G1K17 Pin | Function / İşlev |
| :------- | :------------ | :--------------- |
|  VCC     |  3.3V         | Power / Güç      |
|  GND     |  GND          | Ground / Toprak  |
|  SCL     |  P3.2         | I²C Clock        |
|  SDA     |  P3.3         | I²C Data         |

---
<img width="720" height="1280" alt="vlcsnap-2025-12-25-02h29m42s680" src="https://github.com/user-attachments/assets/f2b6361c-1cbe-4617-ac4d-a96cd92d88dd" />


Video https://youtube.com/shorts/DC_wp1Rv_Vc?si=8D2Y7Zv9Py_LzmPn


