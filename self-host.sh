
if ! test -e Makefile
then
    bash install_pkg.sh
    
    if uname -a | grep Android
    then
        #./configure --with-optimize --prefix=$HOME
        #./configure --prefix=$HOME --with-debug --with-come-debug
        ./configure --prefix=$HOME --with-debug --with-optimize --with-original-postion
    else
        #./configure --with-optimize
        #./configure --with-debug --with-come-debug
        ./configure --with-debug --with-optimize --with-original-position
    fi
fi

if uname -a | grep Android
then
    make comelang2 && make install
else
    make comelang2 && sudo make install
fi
