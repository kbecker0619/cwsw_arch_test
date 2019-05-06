# CWSW MCU Architecture Support

This folder is the "parent" for the MCU architectures supported by the CWSW Software libraries.

This component provides standardized support for all supported MCU architectures. 
Where possible, it simply provides a repackaging of the drivers already supplied by a given supplier.

This component "lives" at the bottom of the dependency hierarchy, although there may be interactions with various libraries, such as the CWSW Lib module.

Looking "down," this component knows how to talk to the actual MCU. Code that lives here is beyond the scope of this library module; as long as the API is compatible, this module can interface with it.

Looking "up," it provides a (somewhat-)standardized API to users of the MCU. In the CWSW ecosystem, this is provided by the CWSW BSP component.

This component does not know anything about the board that uses the MCU; 
that support is provided by the CWSW Board package.

There is one directory for each supported architecture; in your build system, simply exclude all architectures except for the one around which your project is built.

Please see the detailed design documentation, created by Doxygen, for detailed information.

---
Eclipse:	 `XPRJ_Win_MinGW_${ConfigName}`

NetBeans:	 `XPRJ_NB_${CONF}`

MSVC (2010): `XPRJ_MSVC_$(ConfigurationName)`