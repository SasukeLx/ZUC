#ifndef _ZUC_H_

#define _ZUC_H_

//ͷ�ļ�����
/* ----------------------- */
typedef unsigned char u8;
typedef unsigned int u32;
/* ----------------------- */

void Initialization(u8* k, u8* iv);
void GenerateKeystream(u32* pKeystream, int KeystreamLen);

#endif
