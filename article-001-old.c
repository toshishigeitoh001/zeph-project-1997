#if (0)
ad2017 11 11

well in here describe:
first of all i shall simple editor:
make:
it is structure that manupulate text:
and i think function specification:
that it is set body or group:
that enough condition to use:
fullfillment:
like these to make:

ここで記述する事は:
最初に簡単なエディタを:
作成する：
それはテキストを扱う構造である：
そして機能の仕様を考える：
それは集合体である:
使用するのに十分な条件を：
満たすもの：
そういうものを作る：

kokode kijyutu suru kotoha:
saisho ni kanntann na edito wo:
sakusei suru:
soreha tekisuto wo atukau kouzou dearu:
soshite kinou no shiyou wo kanngaeru:
soreha shuugoutai dearu:
shiyou surunoni jyuubunn na jyouken wo:
mitasumono:
souiu mono wo tukuru:

hac hic scribere dicikis:
initium simplex edito wo:
fingere suru:
hoc text agere structura esse:

am3:50
input key and reflect characteristic
and cursor position update
first cursor draw facilities:
program start then draw line
b input then erase draw line that
are cursor
and a input then draw cursor again:
program start first draw cursor
arleady
file:
article-001.c
2017-11-10-001flg.h
2017-11-11-main.c
2017-11-11-sub01.c
this file first prepaire to
zeph_DrawLine()
i think first this code are one
and each of plat form code are
in different but i think each
of zeph_DrawLine_win() and
zeph_DrawLine_macplus() or
zeph_DrawLine_linux_x toka
i think this way are better:
am4:35
zeph_DrawLine related code write:
now include head how to implement parts
rest:
am4:46
am6:01
font setting code possible
char and char string output make
this coordinate:
am6:11
source code fix:
文字フォントの出力に関して、私のプロジェクト
に相応しい対応がとれるようになった。
具体的には、
wbp->hnewf = (HFONT)CreateFont(
				16, 10, 0, 0, FW_NORMAL,
				0, 0, 0, ANSI_CHARSET,
				OUT_DEFAULT_PRECIS,
				CLIP_DEFAULT_PRECIS,
				DEFAULT_QUALITY,
				FIXED_PITCH | FF_ROMAN,
				"monaco");
この指定で、フォントインフラを使用すると
いいようだ。
良好な文字を出力できるようになったので、
エディタの設計をしてみようかとおもいたったが
どうであろうか。
am6:38
ここでの作業は、ゼフプロジェクトに於ける
チェスのソフトウエアに関する研究開発なので
既存のコーディングの復習ということにする。
am6:44
edit chess both how to do this project doing
this theama to pray God:
am7:06
xeon : chess
edit : editor
as like setting to project:
ここまでの改良点を過去のコード群にフィードバック
した。結果は良好。
xeon2017のコードを洗練して新しい方のソースコード
群にフィードバックする。
am11:46
ここまでで、古い方のソフトウエアの管理が
難しい事が判明？
アルゴリズムを確認して対処する。
pm15:34
固定幅のフォントを採用した事で、処理が書き
やすくなった。これは、旧来のxeonコードでの事で
あるが、この2018-004-xeonコードでは、まず、
ページ文字エディタを作成して、
ウインドウズと、エックスで、同じような動作を
するコードを書くところから着手する。
このインターフェース上に、チェスのアプリケーション
を書くとする、これは、旧来のコードの洗練化
作業も含むものとする。
ad2017 11 13 mon
16:18
名前の重要性
importantness of name strings
xeon : chess program code name
ze : mine developping text editor
project zeph 1997
zeph2017 are born to peace code
phase peace:
shift
ad2017 11 15
kono dankai de kijyutu shite okuga
dragon ball xenoverse no text ban
no
game no sextukei wo suru to ii to
kangaeru
shikashi chosakuken toka kono
sakuhin to dou mukiauka nado
monndai ga arukara jikan wo kakete
gakushu suru sunawachi
jibun no sakuhin to shite ha dou suru
noga iika kanngaenaito ikenai:
file name wo a-main.c no case no baai
dono you ni modyfy suru noka dousurka?
-----
directlry under folder zeph2017 edit.mcp rel
this std io code program to some level of complete
need as application newly develop here:
bible related data manage are must duty:
-----
ad2017 11 23 thr 22:40
mazu koukyu na assembler wo tukuru
sore wo tukaxtute system no kouchiku wo hakaru
soshite kore wo kennkyuu sozai to suru:
shisutem no infra wa dou teikyou sareru bekika:?
dakara koukyuu na assembler wo youi shite
sore de system no saishou invokation taishou
wo kouchiku suru youni suru:
system interface no bottle neck wa ... : )
ima open to print no futatu no invokation wo youui shita
kore wo jitugenn suru assembler to sore de kuminaowhite
miru to iu sagyou wo shite miru:
#endif