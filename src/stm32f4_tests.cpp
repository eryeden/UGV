#include "stm32f4_tests.hpp"
#include "stm32f4xx_nucleo.h"
#include "main.h"

/*
  GPIOについて
  GPIOx_ODR　に書き込んでデータ出力
  GPIOx_IDR　に入力データ保存　AHBの毎クロックごとにサンプリングされる
  
  各GPIOピンはマルチプレクサーに接続されており、各々１６個の機能を持つ
  いわゆるAF（Alternative Function）
  AF0 ~ AF15 が存在する
  GPIOx_AFRL, GPIOx_AFRHにて設定する
  リセット後はすべてAF0となる
  主な周辺機能はAF1〜AF13に配置される
  GPIOxには多くの場合０〜１５までのピンが存在するが、
  それら一本一本を別々のAFに設定可能　やべぇ
  
  デバッグに使用するPINは除く

  そもそもリセット後はAF出力ではなくI/O出力になっていると考えられる
  GPIOx_AFAxがクリアされAF0になっているだけである

  AFについて
  ReferenceManual P.150参照
  
 */



void gpio_init(){
   
}

void gpio_execute(){
   
}

