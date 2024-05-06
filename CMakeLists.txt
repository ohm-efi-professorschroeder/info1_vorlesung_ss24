cmake_minimum_required(VERSION 3.27)
project(info1_vorlesung_ss2024 C)

set(CMAKE_C_STANDARD 11)
add_compile_options(-Wall -Wextra)

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

add_executable(03_01-castingLesen termin_03/01_castingLesen.c)
add_executable(03_02-explizitesCasting termin_03/02_explizitesCasting.c)
add_executable(03_03-verkehrsteilnehmer termin_03/03_verkehrsteilnehmer.c)
add_executable(03_04-taschenrechner.c termin_03/04_taschenrechner.c)
add_executable(03_05-bedingteBewertung.c termin_03/05_bedingteBewertung.c)
add_executable(03_06-ifElseGrab.c termin_03/06_ifElseGrab.c)

add_executable(04_01-eingabePruefung termin_04/01_eingabePruefung.c)
add_executable(04_02-binaerUmrechnungSchleife termin_04/02_binaerUmrechnungSchleife.c)
add_executable(04_03-asciiTabelle termin_04/03_asciiTabelle.c)
add_executable(04_04-heron termin_04/04_heron.c)

add_executable(05_01-maexchen termin_05/01_maexchen.c)
add_executable(05_02-wuerfeln termin_05/02_wuerfelspielMain.c termin_05/02_wuerfelspiel.c)
add_executable(05_03-quadPlatten termin_05/03_quadPlatten.c)