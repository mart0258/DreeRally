# Project: DrWin
# Makefile created by Dev-C++ 5.11

CPP      = g++ -D__DEBUG__
CC       = gcc  -nostdinc 
WINDRES  = windres.exe
OBJ      = anim.o blackMarket.o bpaUtil.o cars.o circuit.o config.o dr.o drivers.o externVariables.o graphics.o hallOfFame.o imageUtil.o licenseScreen.o menus.o pedestrian.o popup.o raceParticipant.o raceResults.o savegame.o util.o
LINKOBJ  = anim.o blackMarket.o bpaUtil.o cars.o circuit.o config.o dr.o drivers.o externVariables.o graphics.o hallOfFame.o imageUtil.o licenseScreen.o menus.o pedestrian.o popup.o raceParticipant.o raceResults.o savegame.o util.o

LIBS = -lopengl32 -lglu32 -lmingw32 MINGW32/libs/libSDL.dll.a MINGW32/libs/libSDLmain.a	 MINGW32/libs/fmodvc.lib -static-libstdc++ -static-libgcc  -g3
INCS     = -I"C:/Program Files (x86)/Dev-Cpp/MinGW32/include" -I"C:/Program Files (x86)/Dev-Cpp/MinGW32/mingw32/include" -I"C:/Program Files (x86)/Dev-Cpp/MinGW32/lib/gcc/mingw32/4.8.1/include" -I"./MINGW32/includes"
CXXINCS  = -I"C:/Program Files (x86)/Dev-Cpp/MinGW32/include" -I"C:/Program Files (x86)/Dev-Cpp/MinGW32/mingw32/include" -I"C:/Program Files (x86)/Dev-Cpp/MinGW32/lib/gcc/mingw32/4.8.1/include" -I"C:/Program Files (x86)/Dev-Cpp/MinGW32/lib/gcc/mingw32/4.8.1/include/c++"
BIN      = DrWin.exe
CXXFLAGS = $(CXXINCS) -g3 -D_WINDOWS2_
CFLAGS   = $(INCS) -g3 -D_WINDOWS2_ -w
RM       = rm.exe -f


.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

clean: clean-custom
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CC) $(LINKOBJ) -o $(BIN) $(LIBS)

anim.o: anim.c
	$(CC) -c anim.c -o anim.o $(CFLAGS)

blackMarket.o: blackMarket.c
	$(CC) -c blackMarket.c -o blackMarket.o $(CFLAGS)

bpaUtil.o: bpaUtil.c
	$(CC) -c bpaUtil.c -o bpaUtil.o $(CFLAGS)

cars.o: cars.c
	$(CC) -c cars.c -o cars.o $(CFLAGS)

circuit.o: circuit.c
	$(CC) -c circuit.c -o circuit.o $(CFLAGS)

config.o: config.c
	$(CC) -c config.c -o config.o $(CFLAGS)
		

drivers.o: drivers.c
	$(CC) -c drivers.c -o drivers.o $(CFLAGS)

externVariables.o: externVariables.c
	$(CC) -c externVariables.c -o externVariables.o $(CFLAGS)

graphics.o: graphics.c
	$(CC) -c graphics.c -o graphics.o $(CFLAGS)

hallOfFame.o: hallOfFame.c
	$(CC) -c hallOfFame.c -o hallOfFame.o $(CFLAGS)

imageUtil.o: imageUtil.c
	$(CC) -c imageUtil.c -o imageUtil.o $(CFLAGS)

licenseScreen.o: licenseScreen.c
	$(CC) -c licenseScreen.c -o licenseScreen.o $(CFLAGS)

menus.o: menus.c
	$(CC) -c menus.c -o menus.o $(CFLAGS)

pedestrian.o: pedestrian.c
	$(CC) -c pedestrian.c -o pedestrian.o $(CFLAGS)

popup.o: popup.c
	$(CC) -c popup.c -o popup.o $(CFLAGS)

raceParticipant.o: raceParticipant.c
	$(CC) -c raceParticipant.c -o raceParticipant.o $(CFLAGS)

raceResults.o: raceResults.c
	$(CC) -c raceResults.c -o raceResults.o $(CFLAGS)

savegame.o: savegame.c
	$(CC) -c savegame.c -o savegame.o $(CFLAGS)

util.o: util.c
	$(CC) -c util.c -o util.o $(CFLAGS)
