#!/bin/bash

#起動パスがcom.st.microxplorer.maingui.STM32CubeMXに変更になった。
#前のじゃ起動しないので注意
PATH2CUBEMX="${HOME}/local_devel/lib/STM32CubeMX"
java -cp ${PATH2CUBEMX} com.st.microxplorer.maingui.STM32CubeMX 

