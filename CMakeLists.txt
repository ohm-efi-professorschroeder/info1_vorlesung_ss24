cmake_minimum_required(VERSION 3.27)
project(info1_vorlesung_ss2024 C)

set(CMAKE_C_STANDARD 11)
add_compile_options(-Wall)

add_executable(00_helloworld termin_00/hello.c)

add_executable(01_01-intro termin_01/01_intro.c)
add_executable(01_02-division termin_01/02_division.c)
add_executable(01_03-binearUmrechnung termin_01/03_binaerUmrechnung.c)
add_executable(01_04-binearZahl termin_01/04_binaerZahl.c)
add_executable(01_05-bmi termin_01/05_bmi.c)
add_executable(01_06-bit_shift_operatoren termin_01/06_bit_shift_operatoren.c)
add_executable(01_07-ledAnsteuern termin_01/07_ledAnsteuern.c)

add_executable(02_01-intro termin_02/01_intro.c)
add_executable(02_02-winkel termin_02/02_winkel.c)
add_executable(02_03-mwst termin_02/03_mwst.c)
add_executable(02_04-anteile termin_02/04_anteile.c)
add_executable(02_05-alphabet termin_02/05_alphabet.c)
add_executable(02_06-rechner termin_02/06_rechner.c)
add_executable(02_07-zahlenVergleich termin_02/07_zahlenVergleich.c)
