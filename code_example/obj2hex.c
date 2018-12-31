#include <stdio.h>

int main()
{
	char instr[4096] = "";
	while(1) {
		int ret = 0;
		int addr = 0;
		unsigned long long code = 0;
		ret = scanf("  0x%x: %llx  ", &addr, &code);
		printf("%llx", code);
		if(ret <= 0) break;
	}
	return 0;
}
