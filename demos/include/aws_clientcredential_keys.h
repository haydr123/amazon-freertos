/*
 * FreeRTOS V202012.00
 * Copyright (C) 2017 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
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

#ifndef AWS_CLIENT_CREDENTIAL_KEYS_H
#define AWS_CLIENT_CREDENTIAL_KEYS_H

/*
 * PEM-encoded client certificate
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyCLIENT_CERTIFICATE_PEM \
"-----BEGIN CERTIFICATE-----\n"\
"MIIDWTCCAkGgAwIBAgIUaDbK+eMuF25KFPW+BgHIh1P4DiswDQYJKoZIhvcNAQEL\n"\
"BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g\n"\
"SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTIwMTIyMTA4NDM0\n"\
"NVoXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0\n"\
"ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALOaAYr6dvTGjaR5BZlK\n"\
"mu12KBy4C735RZfBXPYDAGTbOVj9XSEWifx/ak8hFtdzK+HHAEQAwCefYl9A/TXR\n"\
"XxNwW54bsZTEPGByxpIHeHOGlbv7GizHu/uE0vO3txA8rbvevXbgcDTPmH1DgpgT\n"\
"KNeAV9xvmNULfxZ3Hz9XHvCOH30idoRQfwR26+9RAhY2m3RvrRmDDqotVWRYLTAk\n"\
"ZATHjlg2if1K0obpWF/TvRLVsQ3ArjuIbWRYsW0L7+cp4N3O3M6QTqgyiDZDAsek\n"\
"dk7NBHIB+TKffBBk3g7n7cGZLenwdpxfLkowdlw8/LfLd3rzy6QRNbz+UYmKKRa6\n"\
"TE8CAwEAAaNgMF4wHwYDVR0jBBgwFoAUurMy8bYWGdHHmCpBR//DWi+VymUwHQYD\n"\
"VR0OBBYEFF9GLYJlYDtXheYTHKuzkiX7pusZMAwGA1UdEwEB/wQCMAAwDgYDVR0P\n"\
"AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQCxvW3Ca7OKF2YNgAXVYxYymOIV\n"\
"usirriG3ud4sVWsze/eO8awEy/euqHZ5Iko5qPBz0aWhhZSy5O4LvPcMGuxzq1ZQ\n"\
"KTV3QlRxdvHVGRDkgeFnJl0PTmX00MiRuo/1Ajtgd/Jy7HBG9P6VdD9zqDnae6Pe\n"\
"xoH+CvoN9XXz9dBXrmVfcHPvTBkCTUbwMrJZkcZqSgNgiE1WH0KF4SvXPPn5NvOk\n"\
"APN0r7V/zhTYSpjN3kw9pGP6tJG7IkL0oIgv6lntHX2FFw/vnPX6qH0MpRMNEzeE\n"\
"Och8fataZose6GJok8QC/xTy84WeDPBBfDEuvKUylEH9l+QN3o6su0aqNBtM\n"\
"-----END CERTIFICATE-----\n"

/*
 * PEM-encoded issuer certificate for AWS IoT Just In Time Registration (JITR).
 * This is required if you're using JITR, since the issuer (Certificate
 * Authority) of the client certificate is used by the server for routing the
 * device's initial request. (The device client certificate must always be
 * sent as well.) For more information about JITR, see:
 *  https://docs.aws.amazon.com/iot/latest/developerguide/jit-provisioning.html,
 *  https://aws.amazon.com/blogs/iot/just-in-time-registration-of-device-certificates-on-aws-iot/.
 *
 * If you're not using JITR, set below to NULL.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM  ""

/*
 * PEM-encoded client private key.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN RSA PRIVATE KEY-----\n"\
 * "...base64 data...\n"\
 * "-----END RSA PRIVATE KEY-----\n"
 */
#define keyCLIENT_PRIVATE_KEY_PEM \
"-----BEGIN RSA PRIVATE KEY-----\n"\
"MIIEogIBAAKCAQEAs5oBivp29MaNpHkFmUqa7XYoHLgLvflFl8Fc9gMAZNs5WP1d\n"\
"IRaJ/H9qTyEW13Mr4ccARADAJ59iX0D9NdFfE3BbnhuxlMQ8YHLGkgd4c4aVu/sa\n"\
"LMe7+4TS87e3EDytu969duBwNM+YfUOCmBMo14BX3G+Y1Qt/FncfP1ce8I4ffSJ2\n"\
"hFB/BHbr71ECFjabdG+tGYMOqi1VZFgtMCRkBMeOWDaJ/UrShulYX9O9EtWxDcCu\n"\
"O4htZFixbQvv5yng3c7czpBOqDKINkMCx6R2Ts0EcgH5Mp98EGTeDuftwZkt6fB2\n"\
"nF8uSjB2XDz8t8t3evPLpBE1vP5RiYopFrpMTwIDAQABAoIBACishhDtbCc/GDDZ\n"\
"X5U5uiBxE+B9JdueKk6V8fGc+Gfe5fvrVT37FsDiMjc9bSjZ4mQ9Zyf/a4UNqX+c\n"\
"/jtD8V47oeQKrYrdbjcBh0rm+jZfkmWCFolxqnbpu8SKJKE+vLHBXfMgHQk4wnYL\n"\
"5fV+0U8Mt9kqRNhqxBtYWvFDT7R2edSiR6yY2oYEPxZDN1zmR8lOOcklwMgdGCL5\n"\
"Ziz70k3MlgPrL0AyyxEsYgPxfAy6VQXfqBqdIPimIPmxlVz3naV7dkZOxxTpy3PI\n"\
"vNt5h+defuwHMXj0SEHvk0LBsCc3rNBdAGFf0ZT5z6Ufj9XQzTRIyQTFZ+lvxOgu\n"\
"HDu11SECgYEA6nYsZviqZHmyGBDoT/A11fnM8re1evjD+mV/BeMjOKH0udfKwu0k\n"\
"YfsbnF+CnFOvX8waBqYueJqhVxhVa40GOnM3/fLH5BkqGP4DtLDYgSH9R1GII/h4\n"\
"KLOgQYziRa05Vwcb+LqxjNaOaVMqVGko8fnlCIR/YuZG33k/KRgDnYcCgYEAxBmw\n"\
"47g1oAd+4j7Axb2WcNTPUD8beMDeQqyU5jLs1CaCCsGZXK+X18uY9+qXtVH+24QC\n"\
"y7JgWGI93KmZhYP3hKjfCrUyieMWFr4x1xs0oaSckz0kA4TphWnPhrNEWxoRvQNL\n"\
"bGt0YlfxUEmy6Z7Ce3s6V/Mha+upXW98fuB+TPkCgYA9WfDifP0xT3rfu0Te7g9Y\n"\
"T4ZmmNW/OOsnUXm8k6P6xL5iBuqCuUUE8o1WDNQDjg5c9e51gPS2EFhZjv+DJiLU\n"\
"FqQ3KllOAZu3cHiNxpzQpZE+IUKLjw/6Lo6nuHLZIqvXbv/NxSSCov4e52kzL1VM\n"\
"hER/RxSCT5mKDpMNcMA5bwKBgAsIQvpct6+cHFhQHXpCcz8/ybYDBuGhQB/SI8Jb\n"\
"pRU+YVyHjcA4JLvAOYfhC83oogTphVq+W0s9o6tRY1CunvM4qOuqTACT5P88jgND\n"\
"BY/+ecySyP7lsFmQHVu/pB3X9p2CnPCpju+lcO8KZmVcSCa4RQ0DoaK3rFyUVBWz\n"\
"PYfJAoGAScRZAL5SbaMPdbQrAZhWebPpXTWQeYVZA4vpuQSsQ7rsF77CR6gAgHS0\n"\
"kGOTv9hy6G77n/lNgyp3VxYNv4KbJ1TGbZps4gpXBXkc1p1isj8DULwHgy0p+Zrw\n"\
"RE3nFPt1bGAFJRqCql26kwXoC8U21bYyQHvTt0GjOm4/y5JZ+d8=\n"\
"-----END RSA PRIVATE KEY-----\n"

#endif /* AWS_CLIENT_CREDENTIAL_KEYS_H */
