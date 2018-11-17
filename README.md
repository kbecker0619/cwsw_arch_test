# Reusable Component : MCU Architecture Support

This folder is the "parent" for the MCU architectures supported by the CWSW Software libraries.

There is one directory for each supported architecture; in your build system, simply exclude all architectures except for the one around which your project is built.

Please see the detailed design documentation, created by Doxygen, for detailed information.

---
Eclipse:	 `XPRJ_Win_MinGW_${ConfigName}`

NetBeans:	 `XPRJ_NB_${CONF}`

MSVC (2008): `XPRJ_MSVC_$(ConfigurationName)`