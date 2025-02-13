# c-atmega328p-timer0

**Project Description - English**

This project demonstrates the use of Timer0 in CTC (Clear Timer on Compare Match) mode in the ATmega328P microcontroller to control LEDs cyclically. Timer0 generates interrupts at fixed time intervals, and the interrupt handler increments a counter, which controls the LEDs. The implementation is done in pure C, directly accessing registers, without Arduino libraries.

Features:

- Initialization of Timer0 in CTC mode

- Timer0 interrupt triggered at regular intervals

- LED control based on the counter value

- Using ATmega328P microcontroller in pure C

Hardware Requirements:

- ATmega328P microcontroller (e.g., Arduino Nano or standalone AVR)

- LED connected to PD5

- Connecting wires

Usage Instructions:

- Compile the code in an AVR C-compatible environment (e.g., Atmel Studio, PlatformIO, AVR-GCC).

- Upload the program to the microcontroller using an ISP programmer.

- The microcontroller automatically controls the LEDs in regular intervals.

- Observe the LED blinking based on the counter value.

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

**Opis projektu - Polski**

Ten projekt demonstruje użycie Timer0 w trybie CTC (Clear Timer on Compare Match) w mikrokontrolerze ATmega328P do cyklicznego sterowania diodami LED. Timer0 generuje przerwania w regularnych odstępach czasu, a w obsłudze przerwania zwiększany jest licznik, który steruje diodami. Implementacja w języku C korzysta bezpośrednio z rejestrów, bez bibliotek Arduino.

Funkcjonalność:

- Inicjalizacja Timer0 w trybie CTC

- Przerwanie Timera0 wyzwalane w regularnych odstępach czasu

- Sterowanie diodami LED w zależności od wartości licznika

- Obsługa mikrokontrolera ATmega328P w czystym C

Wymagania sprzętowe:

- Mikrokontroler ATmega328P (np. Arduino Nano lub standalone AVR)

- Dioda LED podłączona do pinu PD5

- Przewody połączeniowe

Instrukcja użytkowania:

- Skompiluj kod w środowisku obsługującym AVR C (np. Atmel Studio, PlatformIO, AVR-GCC).

- Wgraj program do mikrokontrolera za pomocą programatora ISP.

- Mikrokontroler automatycznie steruje diodami LED w regularnych odstępach czasu.

- Obserwuj miganie diod w zależności od wartości licznika.
