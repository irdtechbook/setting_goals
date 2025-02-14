= 人生は投機的実行でいこう！

//flushright{
sapi_kawahara（さっぴー川原） @sapi_kawahara
//}

本章では、目標設定をするに必要となる技術の習得について書きます。技術は確実に進歩し、最新技術もいつかはレガシーと呼ばれる技術になり、この世界において目標設定をすること自体難易度が高く、不安になることがあります。エンジニアの原資は技術であり、技術習得こそエンジニアの価値を高める行動で、新しい技術を習得することは何よりも優先される課題であり解決するべきことです。

課題を解決する方法は人それぞれありますが、私が実行している@<b>{投機的実行}について述べます。この方法はすべての方に適用できるというわけではありませんが、技術を広く知ることになるので技術の流行り廃りに対して強いです。さらに技術の幅が広がるので自分の技術の特性を知るよい機会になります。このように、投機的実行はメリットが多いです。将来の技術習得に疑問を感じた方は読んでくだされば幸いです。

== 投機的実行について
投機的実行という言葉はコンピューター用語です。私はこの用語を人に対して使っています。なぜ人に対してコンピューター用語を使うのかは、このあと説明します。まずはコンピューターにおける投機的実行の意味を説明します。

投機的実行とはコンピューターが処理における高速化方法のひとつです。

パソコンやスマートフォンの中には、CPUと呼ばれる処理をするための頭脳が入っています。CPUはコアと呼ばれる頭脳が複数入っており、別々の処理を同時に実行します。それとは別にスレッドと呼ばれる動作方法があり、これはひとつのコアをスレッドに分けて別々の処理を同時に実行します。このように、CPUはコアとスレッドにより別々の処理を同時実行できるようになっており、この機能を使ってCPUは投機的実行を行います。

CPUが処理をするとき、前もって予測し必要になるかもしれない処理をあらかじめ実行しておきます。そして先回りで実行しておくことで、数多くの分岐があることが事前にわかるため、分岐先も予測して、さらに分岐した先の処理も実行します。その予測が当たれば実行済みの処理を継続するため高速に処理が行えます。予測が外れたら処理はムダになりますが、予測の外れが確定するまで待ってからの処理と速度的には変わらないので、投機的実行を行った方が全体的な処理は高速になる……というのが、投機的実行の基本的な考え方になります。

== 人がやる投機的実行
それでは人に対して投機的実行を当てはめてみます。

人は複数の頭脳は持っていません。私が言っている投機的実行は、興味ある技術であれば、今すぐ仕事で使わなくても、直接仕事とは関係しなくても、頭を切り替えて貪欲に習得することです。興味があり習得すれば、その結果、多くの技術を所有することになります。技術を多く所有すれば技術同士を比較できるようになりますし、このことができるようになると技術を俯瞰して見ることができるようになります。

これだけでもエンジニアが行う投機的実行にはメリットがあるのですが、興味ある技術が投機的実行でいう予測から外れた技術ではないかという不安はあると思います。外れたら技術に投資した資金や時間はムダになるので、なかなか踏み込めないと思うでしょう。そして、踏み込めないまま技術の流行り廃りに巻き込まれてしまい、結果として興味のない技術を義務的に習得することになりますが、それはおもしろいのでしょうか？技術の習得における燃料は興味です。興味があるときに投機的実行を行いましょう！

それから、人がやる投機的実行には、コンピューターの投機的実行にはない優れた効果があります。予測外れの再利用や、投機的実行の連続利用などです。これらの話は次に記載します。

== 予測が外れても将来必要になることもある
私がIT業界に転職したとき（2000年）、世の中はiモード携帯がブームになりつつあるころで、技術はPerlが中心の時代でした。Perlは今も使われている言語ですが、いつかは中心から外れてしまい廃れてしまうかもしれません。そうなっては困ると考え、私はここで投機的実行を行いました。

選んだ言語はPHPとPythonでした。

PHPを選んだ動機はPerlより習得しやすいのと、Webでの開発速度をあげたいと思ったからです。Web開発はPHPがメインだったこともあり、結果的にPHPを習得したおかげで、PHPのバージョン3からバージョン7までの間Web開発に関わることができました。PHPの習得は投機的実行においては予測が当たったことになります。

PythonはPerlのbatch処理を置き換えるために選びましたが、漢字処理が弱かったのと言語仕様において少々癖が強いことなどから当時はあまり話題にならず、言語習得してから趣味で扱う程度でした。その結果Pythonの習得は投機的実行においては予測が外れたことになります。

ただ、当時は予測が外れたと思っておりましたが、@<b>{過去に習得した言語を将来に使うことが訪れました}。2017年ぐらいから少しずつPythonが脚光を浴びるようになりました。今ではクラウドサービスの制御やAIなどの機械学習ではPythonが重宝されています。Pythonは遅れて話題になった言語なのです。


== 過去の習得した技術が必要になることもある
私はもともとコンシューマゲーム機、つまりファミコンのゲーム開発を行っておりました。ファミコンなどの開発はアセンブラー言語ですが、パソコンでのツール開発ではC言語やC++を使っており、趣味でもX68000を所有してC言語を使っておりました。やがてゲーム開発でもC言語が必要になる時代が到来し、プレイステーションやサターン時代ではC言語がメインの開発言語になりました、これも投機的実行の予測が当たったことになります。

それだけはなく、2018年ぐらいからIoTがブームになり、IoTでよく使われるArduinoボードではC言語がベースのC++で動いています。私はゲーム開発を卒業してITの世界に転職しましたが、ArduinoボードではC言語だけではなく、昔のゲーム開発に近い勘どころもあり昔取った杵柄が役立っております。


== 投機的実行のコツ
投機的実行のコツを書きます。
投機的実行の予測が当たったこと、外れたけど再利用できたこと、連続利用できたことなど良かった話を書いてきましたが、完全に外れで再利用もない予測もあります。数々の当たり外れを踏まえて投機的実行のコツを書いていきます。

調査会社が出した「今年トレンドの開発言語」とかは指標として見るのはよいですが、これをメインの予測データとして使うのはオススメしません。調査対象が全然関係ない業界だったり、GitHubのコミット数だったりと、的外れなデータが使われています。とくにGitHubに関しては、OSSの調査ならハズレではないものの、調査対象がPublic Repositoryのみになっているため、本当に予想に使う場合は企業が使用しているRepositoryまで含めないと意味がないからです。

このようなデータを見るよりも、商業出版されている書籍など観察することを勧めます。書籍はある一定数の需要予測に基づいて出されているものでありデータとして価値があります。書籍のカテゴリーに注目するのも良いです。2000年ごろは機械学習などはカテゴリーにすらなっていないニッチなカテゴリーでありましたが2017年ぐらいから出版数が増えてカテゴリー化されました。書籍のカテゴリー化は今後の出版されるということで参考になる指標となります。さらに技術書同人誌においては商業出版よりも早い動きを見せるため、技術書同人誌界隈をウォッチすると予測の精度があがります。

== 最後に
人がやる投機的実行について書きましたが、投機的実行には終わりはありません。それは技術が興味の対象だからです。技術の興味が永遠に続くなら投機的実行も永遠に続きます。そんな人生楽しいでしょ！楽しい人生で、さらに目標設定の原資となる技術を取得できるなんて一石二鳥です。もし興味を持っていただけたなら、人生の投機的実行を実践しましょう。
