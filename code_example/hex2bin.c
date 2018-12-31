#include <stdio.h>

void hex2bin(int x, int lev)
{
	if(lev < 8) {
		hex2bin(x/2, lev+1);
		printf("%d", x%2);
	}
}

int main()
{
	int cnt = 0;
	while(1) {
		cnt++;
		int ret = 0;
		int hex = 0;
		ret = scanf("%2x", &hex);
		//printf("%02x",hex);
		hex2bin(hex, 0);
		printf(" ");
		if(ret <= 0) break;
		if(cnt%4 == 0) printf("\n");
	}
	return 0;
}
