# invoke SourceDir generated makefile for clock.pem3
clock.pem3: .libraries,clock.pem3
.libraries,clock.pem3: package/cfg/clock_pem3.xdl
	$(MAKE) -f C:\Users\meteh\workspace_v12\TI_EMBEDDED_PROJECT/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\meteh\workspace_v12\TI_EMBEDDED_PROJECT/src/makefile.libs clean

