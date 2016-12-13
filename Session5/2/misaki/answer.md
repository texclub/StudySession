# コンパイル時に最適化オプションを付与する
コードを最適化するための**最適化オプション**というものをコンパイル時に付与することができる.
付与した場合, コンパイルにかかる時間は長くなるが, 実行した際の速度を向上させることができる.

もっと詳しく見たい場合は[こことか](http://wwweic.eri.u-tokyo.ac.jp/computer/manual/altix/compile/Fortran/Intel_Fdoc91/main_for/mergedProjects/optaps_for/common/optaps_lev_opts.htm)参照.

### Sample
```
gcc -O3 question.c
```
