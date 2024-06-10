SORTIERUNGLIBFILES = sortierung.c
SORTIERUNGTESTLIBFILES = $(SORTIERUNGLIBFILES) ../utils/zahlenEingabe.c
SORTIERUNGSVERGLEICHLIBFILES = $(SORTIERUNGLIBFILES) ../utils/stoppuhr.c ../utils/zufallsarray.c

sortierungTest:
	gcc -Wall -o sortierungTest sortierungTest.c $(SORTIERUNGTESTLIBFILES)
	
sortierungsvergleich:
	gcc -Wall -o sortierungsvergleich sortierungsvergleich.c $(SORTIERUNGSVERGLEICHLIBFILES)