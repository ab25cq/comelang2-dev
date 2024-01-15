if ! test -e Makefile
then
    if uname -a | grep Android
    then
        ./configure --prefix=$HOME
    else
        ./configure
    fi
fi

if uname -a | grep Android
then
    make && make install
else
    make && sudo make install
fi
