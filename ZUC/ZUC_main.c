#include <stdio.h>
#include "zuc.h"

k = "000000000000000";
iv = "000000000000000";
pKeystream[] = { 2, 3, 3, 4, 5, 6 };
KeystreamLen = 6;
int main()
{

	Initialization(k, iv);
	GenerateKeystream(pKeystream, KeystreamLen);
	getchar();
	return 0;
}
