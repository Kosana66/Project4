#include <stdio.h>

int main() {
	unsigned long broj;
	unsigned char *pokazivac;

	printf("Unesite hex broj do 8 cifara: ");
	scanf_s("%X", &broj);

	pokazivac = (unsigned char*)&broj;

	printf("Velicina unsigned long: %u\n", sizeof(unsigned long));
	// big endian - smesta se prvo MSB bajt
	for (int i = 0; i < sizeof(unsigned long); i++) {
		printf("Bajt %d: 0x%X\n", i, pokazivac[i]);
		// memorija - little endian
	}
	// little endian - smesta se prvo LSB bajt
	return 0;
}