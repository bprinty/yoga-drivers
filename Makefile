

default: wireless

wireless:
	cd rtl8723au  && \
	make && \
	sudo make install && \
	sudo modprobe r8723au

bluetooth:
	cd rtl8723au_bt && \
	make && \
	sudo make install
