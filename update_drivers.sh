#~/bin/bash

# wireless
pushd rtl8723au
make
sudo make install
sudo modprobe 8723au
popd

# bluetooth
pushd rtl8723au_bt
make
sudo make install
popd


