typedef struct Pedestrian {
	int positionX; // weak
	int positionY; // weak
	int pedestrianId; // weak
	int rotation; // weak
	int byte5; // weak
	int isDied; // weak
	int byte7; // weak
	int byte8; // weak

	} Pedestrian;

extern Pedestrian pedestrian_479AA4[20];

char __cdecl drawPedestrian_43AF30(int screenOffset, int pedestrianbpkOffset, int sizeToPaint);
char drawShotPedestrian_4111F0();
