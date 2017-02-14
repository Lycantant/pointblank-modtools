// MIT License
//
// Copyright (c) 2013 Thami Rusdi Agus - abujafar (@janglapuk)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#ifndef CryptedFunc_h__
#define CryptedFunc_h__

unsigned char ucCryptedBRE[0x68] = {
										0xC9, 0xAA, 0x17, 0xF0, 0xB8, 0x8C, 0xCA, 0xAA, 0x17, 0xE8, 
										0xB8, 0x90, 0xA2, 0x16, 0x9A, 0xCB, 0xAA, 0x17, 0xE0, 0xB8, 
										0x88, 0x25, 0x94, 0x9C, 0x9C, 0x9C, 0xAA, 0x14, 0xD8, 0xB8, 
										0x8C, 0xB7, 0x51, 0xAF, 0x5C, 0xAA, 0x15, 0xD0, 0xB8, 0x84, 
										0x19, 0x63, 0xE2, 0xAB, 0xCF, 0x77, 0x95, 0xAA, 0x11, 0xB8, 
										0xB8, 0xAA, 0x17, 0xD0, 0xB8, 0x80, 0xA2, 0x16, 0x80, 0xAC, 
										0xA2, 0x11, 0xCB, 0x63, 0xA7, 0x5E, 0xE1, 0x9B, 0xA2, 0x16, 
										0xC8, 0xAC, 0x9D, 0x77, 0x99, 0xAA, 0x16, 0xC8, 0xB8, 0x88, 
										0x4E, 0x76, 0x17, 0x51, 0x4E, 0x7F, 0xDC, 0x96, 0x4F, 0xA7, 
										0x5B, 0xA2, 0x14, 0xC8, 0xAC, 0x63, 0xE0, 0x4D, 0xC7, 0xC3, 
										0xC2, 0xC1, 0x5F, 0x0C
									};


unsigned char ucCryptedBRD[0x60] = {
										0xAA, 0x17, 0xD8, 0xB8, 0x94, 0xCF, 0xAA, 0x17, 0xC0, 0xB8, 
										0x8C, 0xC9, 0xCA, 0xCB, 0xAA, 0x17, 0xE0, 0xB8, 0x88, 0xA2, 
										0x16, 0xD0, 0x9B, 0x63, 0x21, 0x94, 0x9C, 0x9C, 0x9C, 0xA2, 
										0x11, 0xEC, 0x63, 0xB7, 0x77, 0xAA, 0x14, 0xD0, 0xB8, 0x80, 
										0x19, 0x6A, 0xE0, 0xB4, 0xA2, 0x16, 0x98, 0xA2, 0x19, 0x6A, 
										0xE2, 0x9B, 0xA2, 0x16, 0xC8, 0xA2, 0x63, 0x77, 0x99, 0xAA, 
										0x16, 0xC8, 0xB8, 0x80, 0x16, 0x57, 0x4E, 0x74, 0x17, 0x51, 
										0x4E, 0x7E, 0x96, 0x5E, 0x1F, 0x72, 0x9D, 0xA2, 0x14, 0xD8, 
										0xA2, 0x9D, 0xE5, 0x44, 0xC3, 0xC2, 0xC1, 0xC7, 0x5F, 0x0C, 
										0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C
									};

namespace CryptedFunc {
	bool NotXorBit(unsigned char *ucBytes, int nLength, unsigned char ucXor=0x63) {
		if(!nLength) 
			return false;

		for(int i=0; i<nLength; i++) 
			ucBytes[i] = ~ucBytes[i] ^ ucXor;

		return true;
	}
}

#endif // CryptedFunc_h__