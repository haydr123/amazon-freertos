/*
 * FreeRTOS V202012.00
 * Copyright (C) 2020 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */

#ifndef __AWS_CODESIGN_KEYS__H__
#define __AWS_CODESIGN_KEYS__H__

/*
 * PEM-encoded code signer certificate
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"
 * "...base64 data...\n"
 * "-----END CERTIFICATE-----\n";
 */
static const char signingcredentialSIGNING_CERTIFICATE_PEM[] =
"-----BEGIN CERTIFICATE-----\n"\
"MIICYDCCAgYCCQDqyS1m4rjviTAKBggqhkjOPQQDAjCBtzELMAkGA1UEBhMCSlAx\n"\
"DjAMBgNVBAgMBVRva3lvMRAwDgYDVQQHDAdLb2RhaXJhMRwwGgYDVQQKDBNSZW5l\n"\
"c2FzIEVsZWN0cm9uaWNzMSYwJAYDVQQLDB1Tb2Z0d2FyZSBEZXZlbG9wbWVudCBE\n"\
"aXZpc2lvbjERMA8GA1UEAwwISXNoaWd1cm8xLTArBgkqhkiG9w0BCQEWHmhpcm9r\n"\
"aS5pc2hpZ3Vyby5mdkByZW5lc2FzLmNvbTAeFw0xOTExMTYwMTI3NTBaFw0yOTEx\n"\
"MTMwMTI3NTBaMIG3MQswCQYDVQQGEwJKUDEOMAwGA1UECAwFVG9reW8xEDAOBgNV\n"\
"BAcMB0tvZGFpcmExHDAaBgNVBAoME1JlbmVzYXMgRWxlY3Ryb25pY3MxJjAkBgNV\n"\
"BAsMHVNvZnR3YXJlIERldmVsb3BtZW50IERpdmlzaW9uMREwDwYDVQQDDAhJc2hp\n"\
"Z3VybzEtMCsGCSqGSIb3DQEJARYeaGlyb2tpLmlzaGlndXJvLmZ2QHJlbmVzYXMu\n"\
"Y29tMFkwEwYHKoZIzj0CAQYIKoZIzj0DAQcDQgAEWiAlaCQGEgIKoP+qk7Uqc/ME\n"\
"/hjwamq1v/z/LWx15CKig59Pd3+ar2RFOlMMOhIfkYgS+Ha7tH+w0ggnKDrUujAK\n"\
"BggqhkjOPQQDAgNIADBFAiArP+9pg0eWqaIkC77T8nDHs9r+18KKvntIDoo9FhKW\n"\
"gQIhAO75WVGyGt58QCGNx3wMcbaDgJ4Xpqj0SWTWdxdz0jh1\n"\
"-----END CERTIFICATE-----\n";

#endif
