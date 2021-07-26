= 目標設定以前の話、目標設定以後の話

//flushright{
雛形 (hina)
//}

== はじめに

目標設定をテーマにした本ということで、本書では目標に関する様々な技術やヒントが提供されているものと思います。

この章では目標そのものから少し視野を広げて、目標設定以前の話題として@<em>{自分のマニフェストを作る話}、そして何らかの方法で目標が適切に設定されたものとして、目標設定以後の話題として@<em>{立てた目標をこなしていくときに筆者が心がけていること}について紹介できればと思います。

ここで述べる事柄は筆者の個人的な経験と見解であり、それらが正解かどうかはわかりませんが、少なくともここ数年間の筆者を支えてくれているものではあります。
ひとつの考え方として、本題である目標設定の箸休めに読んでいただければ幸いです。


== 目標設定以前の話：自分のマニフェストを作る

=== マニフェストとは？

マニフェストとはなんでしょうか？
日本では選挙における「公約」の意味で用いられることの多い単語ですが、ソフトウェア開発者にとっては "Manifesto for Agile Software Development"、日本語では「アジャイルソフトウェア開発宣言」@<fn>{agilemanifesto}のほうがなじみ深いかもしれません。
このアジャイルソフトウェア開発宣言には価値を表明する箇所があります。
以下に引用してみましょう。

//footnote[agilemanifesto][https://agilemanifesto.org/iso/ja/manifesto.html この注釈を含め、以降のウェブサイトはすべて2019年8月閲覧。]

//quote{
プロセスやツールよりも@<em>{個人と対話}を、

包括的なドキュメントよりも@<em>{動くソフトウェア}を、

契約交渉よりも@<em>{顧客との協調}を、

計画に従うことよりも@<em>{変化への対応}を、

価値とする。

（引用者の責任で大文字表記を太字に変更）
//}

ありたい姿としてAよりもBを価値とする、これは目標でしょうか？
目標にしてはややざっくりしているようにも思えますし、目的というのもちょっと違うような気がします。
しかし、目指しているものであることは間違いありません。
目標ほど具体化されていない価値観、目指したいと思っているもの、そういったものをこの章ではマニフェストと定義します。
そういった価値観の言語化を個人的にやってみよう、という試みです。

個人的な理念を表明することについては、スティーブン・R・コヴィーの著書『7つの習慣』@<fn>{sevenhabits}でも紹介されています。
この本にある第2の習慣「終わりを思い描くことから始める」では、以下のような記述があります。

//quote{
終わりを思い描くことから始める習慣を身につけるには、@<em>{個人のミッション・ステートメント}を書くのがもっとも効果的だ。
ミッション・ステートメントとは、信条あるいは理念を表明したものである。
個人のミッション・ステートメントには、どのような人間になりたいのか（人格）、何をしたいのか（貢献、功績）、そしてそれらの土台となる価値観と原則を書く。

（太字原文ママ）
//}

先ほどのアジャイルソフトウェア開発宣言で見られた "マニフェスト" と、『7つの習慣』での "ミッション・ステートメント" で言葉は異なりますが、両者の指す意味はそう違わないことがわかるでしょう。

『7つの習慣』では前述の引用箇所に続いて、「個人のミッション・ステートメントは、その人の憲法と言える」という記述が出てきますが、ミッション・ステートメント（あるいはマニフェスト）と目標の関係は、憲法と法律の関係に似ています。
法律の妥当性を評価する基準が憲法であるならば、ミッション・ステートメント（あるいはマニフェスト）は目標の妥当性を評価する基準といえます。
そのような働きをする価値観を個人的に定めておくことは、目標を設定するうえで役立つでしょう。
そういった価値観の言語化を個人的にやってみませんか、というご提案です。

//footnote[sevenhabits][スティーブン・R・コヴィー『完訳 7つの習慣』キングベアー出版、2013年]

筆者はかつて、とあるPodcast番組でパーソナリティたちが「やっていき宣言」@<fn>{yatteikimanifesto}なるものを表明しているのを耳にしました。
当時の筆者はその心意気と宣言の美しさに触発され、自分でもこうした宣言を持ってみようと思い立ちました。
その後、ある程度の時間をかけて価値観を集め、集めた価値観をマニフェストの形に仕立て上げました。
以下ではそのときに筆者が取り組んだことを紹介しながら、個人のマニフェスト作りの一例を解説できればと思います。

//footnote[yatteikimanifesto][https://yatteiki.fm/manifesto]

=== 日常で見つけた価値観を記録しておく

価値観を宣言に仕立て上げるには、その芯となる部分を簡潔な言葉で表現する必要があります。
しかし自分の価値観は普段はもやっとしていて、注意していないとなかなか見えてこないかと思います。

「アジャイルソフトウェア開発宣言」における価値観は "AよりもBを価値とする" という比較の形で書かれていますが、このように比較の形にしてやることはわかりやすくするコツだと思いました。
そこで、普段の生活の中で "AかBか" という選択を迫られる場面は数多くありますが、そうした場面での "AよりもB" という個人的な判断、もしくはその根本にあるものを少しだけ考えてみて、それを記録してとっておく、ということを続けました。

西尾泰和の著書『エンジニアの知的生産術』@<fn>{intellitech}の第5章では、考えをまとめる方法として、川喜田二郎のKJ法を現代風にカスタマイズした手法が紹介されています。
上で述べた筆者個人の価値観を集める試みは、『エンジニアの知的生産術』第5章で言及される「書き出し法」に体系化されるものであったと思います。
書き出し法では自分の中にある情報を思い付く限りふせんに書き出しますが、このときに心のハードルを可能な限り下げましょう、という姿勢が強調されています。
心のハードルを下げるにあたっては、具体的には「質を求めてはいけない」「重複は気にしない」といった点が指摘されますが、こうした留意点は価値観の記録でも有効であると考えます。
自分がなした日常の判断の裏に少しでも引っかかりを感じたら、積極的に記録に残しておきましょう。

//footnote[intellitech][西尾泰和『エンジニアの知的生産術』技術評論社、2018年]

KJ法の文脈における書き出し法は、自分が大量の情報で混乱しているのか、それとも情報が少なすぎてわかっていないのか、のふたつを切り分けるために実施されるものです。
そのためにある程度限られた時間の中で実施されるものでした。
しかし価値観を書き出すときには、時間の制約は課さずにやるほうが良いと考えています。
その理由として、価値観というのは冒頭で述べた通りもやっとしていて、その価値観を実際に問われる場面にでも晒されない限り、なかなか表出してこないものだと考えているからです。
優れた想像力があれば話は別ですが、価値観の概形を得るためには自然体での価値観テストを複数回試行することが必要で、そのためには必然的にある程度の時間を要する、というのが筆者の考えです。

また別の側面として、自分の価値観も年月を経るうちに少しずつ変わっていくものだと思います。
自分にとって大事なことを、ある特定の時点で短期集中的にピックアップするよりも、自分も環境も少しずつ変化していく中で、それでも耐え続けている大事なことをすくい上げるほうが、自分の価値観により近づけるように思いませんか？
筆者はこの価値観の書き出しを気負わずに細く長く続け、結果的に1年ほど費やしました。
自分にとって大事なことの耐用年数を推し量るためにも、ある程度の期間が必要になると考えています。

=== 他者の言葉や価値観に触れる

自分にとって大事にしたいことが、他者にとっては案外そうではなかったり、逆に自分は重要でないと思っていたことが、他者にとって大事だったりもします。
あるいは、これまでの自分が気づいていなかったり、ぼんやりとしか見えていなかったことを、他者の言葉や価値観が教えてくれることもあります。
いいなと感じたものはとっておいて、自分の中に取り込みましょう。

筆者は前述の「やっていき宣言」に触発されたこともあり、やっていき宣言と、その母体となっている「アジャイルソフトウェア開発宣言」を参照しました。
アジャイルソフトウェア開発宣言はソフトウェア開発の領域における価値観の表明ですが、やっていき宣言はもう少し広い領域、個人のあり方もカバーしていると感じます。
さきに示した『7つの習慣』からの引用箇所にもあるように、マニフェストには「どのような人間になりたいのか（人格）」も含めると良さそうですので、たとえエンジニアであっても技術の領域に限定せずに、視野を広げて文献をあたるのが良いでしょう。

ここで文献という表現を使いましたが、他者の言葉や価値観を得るための手段は静的な文字媒体に限りません。
情報や思想を伝えるのに最も効率が良いのは本ですが、それ以外の創作物からも情報や思想、ひいては価値観を得ることができると考えます。
もしくは、リアルな他者を介する機会が持てるのであれば、その人の講演を聴いたり、直接会話することで得られるものがあるでしょう。

また、少し特殊な例になりますが、過去の自分も一種の他人として今の自分を支えてくれるかもしれません。
日記なりブログを書き続けていると、たかだか数年前の自分ですらもはや他人のように感じてしまうほどに、考え方やものの感じ方が変わっていることがあります。
しかしそれでも自分の芯の部分は残り続けているのか、という問いかけは有効でしょう。
すなわち今の自分の価値観は当時から同じ道を辿ってきたのか、それとも当時とは違う道を歩むことになったのか、あるいは一周回ってまた同じところに戻ってきたのか。
過去の自分との検証作業は、価値観の強度を量るうえでなにがしかのヒントをくれるものと思います。

=== 抽象化作業

前節までの作業で、ある程度の量の自分の価値観、他者の言葉や価値観が集まると思います。
おそらくその内容は範囲も粒度もばらばらで、簡潔とはとてもいえない状態でしょう。
この集まりから大事な部分を抽出し、価値観の芯の部分を取り出せることを期待します。

ふたたびKJ法を参照しますと、雑多な集合から秩序を見出していくという作業もまたKJ法のプロセスのひとつとして体系化されています。
KJ法における「グループ編成」が相当し、このプロセスは以下の3つのステップより構成されます。

 * ラベル拡げ
 * ラベル集め
 * 表札作り

ここで、@<em>{ラベル}と呼んでいるものが集めたものひとつひとつに相当します。ここでは、自分なり他者なりの価値観ですね。

@<em>{ラベル拡げ}では、デジタルであればPCの画面で一覧表示する、ふせんなどのアナログな記録であれば物理的なスペースに並べるなどして、集めたラベルの一覧性を確保します。
頭の中だけで考えていると思考が堂々巡りしてしまいがちですが（筆者がそうです）、一覧性を確保することで堂々巡りを緩和し、思考を前に進められる、という実感があります。
続く@<em>{ラベル集め}では、関係のありそうなラベルを近くに移動してグループを作ります。
そして、@<em>{表札作り}ではグループの内容をうまく表現する "表札" を付けます。

筆者は単に似ているラベルをグループに集め、それらの重要な部分を簡潔な言葉に抽出して表札にする、ということをやりました。
具体的な事象を基に抽象化するプロセスとしてはこれで妥当だと考えますが、しかし『エンジニアの知的生産術』で指摘されている通り、@<em>{ラベル集めにおける関係とは単に類似関係だけではなく、対立関係、それに話題がつながる関係もありうる}、ということは指摘しておきたいと思います。
表札を作れる＝うまく要約できるグループが良いグループであり、そこに至る道筋として様々な関係性を検討できると良いでしょう。

ところで、抽象化するうえで借り物の表札を使う、すなわち他者によって一般化された解釈を借りてくる、というのはどうでしょうか。
ようは自己分析というやつですね。
世にある様々な自己分析は "自分が得意であろうこと" を教えてくれます。
それらはたいてい簡潔な言葉、万人に当てはまるような抽象的な表現で与えられることから、一見してすぐ表札にできそうにも思えます。
しかしそれらが "自分にとって大事なこと" かどうかは、注意して見る必要があると考えます。
得意なことと大事なこと、おそらく両者は近い位置にはあれども、人によっては完全に一致しないこともあるでしょう。
そして、そうした借り物の表札を使うことは、『エンジニアの知的生産術』の言葉を借りれば「他人が主観的に作った枠に、情報を押し込める行為」であり、「借り物の解釈を優先してしまっている」ことであるのには注意しておく必要があります。
自己分析の有用性は否定しませんし、筆者自身も自己分析を使いながら、自分のうまくやる傾向をなんとなく把握しています。
しかしそうしたものから得られる情報はあくまでも参考程度にとどめておき、価値観については普段の自分と紐付いた自作の表札を作りませんか、というのが筆者の考えです。

=== 定期的にアップデートする

こうして作ったマニフェストは一度作ったら終わりにするのではなく、定期的にアップデートしていきましょう。
何度も書き直しが必要であるということは、『7つの習慣』でも指摘されている通りです。

//quote{
ミッション・ステートメントは、一晩で書けるものではない。深く内省し、緻密に分析し、表現を吟味する。そして何度も書き直して、最終的な文面に仕上げる。自分の内面の奥底にある価値観と方向性を簡潔に、かつ余すところなく書き上げ、心から納得できるまでには、数週間、ことによれば数カ月かかるかもしれない。完成してからも定期的に見直し、状況の変化によって、物事に対する理解や洞察も深まっていくから、細かな修正を加えたくなるだろう。
//}

試行と改善を繰り返しながら少しずつ良い方向へと向かっていく、これこそアジャイルなアプローチであり、エンジニアの得意とするところだと思います。
追記したい価値観が出てきたら、これまでのように記録してとっておきましょう。
ある程度の記録が集まったタイミングで書き直し作業を行います。
こうした振り返りを通して、ありたい姿に徐々に近づいていくことができますし、自分の価値観の変化も知ることができます。


== 目標設定以後の話：やっていくときの心がけ

=== やることを管理するための何らかの手法を採用する

世に言うタスク管理の方法ですが、どの手法が当てはまるかは人それぞれなので、ここでは特定の手法を推奨することはしません。
どのようなタスク管理手法があるかについては、最近の書籍では倉下忠憲の著書『「やること地獄」を終わらせるタスク管理「超入門」』@<fn>{yaruowa}が網羅的に取り扱っており、タスク管理の全体像を知るうえで参考になるかと思います。

ひとつ言えるとすれば、タスク管理の方法は人の数だけあり、人によって合う合わないがある、ということです。
なので試すハードルは極力下げつつ、自分の中で続いたら儲けもの、くらいの気楽な気持ちで始めるのが良いと思います。
同じ理由で、オリジナルの手法は尊重しつつも、自分にとって合わない部分はカスタマイズしていきましょう。

//footnote[yaruowa][倉下忠憲『「やること地獄」を終わらせるタスク管理「超入門」』星海社新書、2019年]

=== 複数の不確定要素をいっぺんに扱わない

あなたはおにぎりを作ることができますが、寿司（軍艦巻き）を作りたくなったとします@<fn>{rebuildhak}。
おにぎりと軍艦巻きの違いは（細かいディテールを無視すれば）以下の2つに分解されます。

 * ご飯、海苔、具材の組み方が異なる
 * 普通の白米が酢飯にアップグレードされている

どちらも自分にとってできるかどうかわからない、つまり不確定要素であるならば、まずはひとつずつ片付けることを考えましょう。
前者から取り組むのであれば、酢飯ではなく普通の白米を使いながら軍艦巻きのモックアップを作りましょう。
後者であればまずは海苔と具材は脇に置いておいて、普通の白米から酢飯が作れるかどうかを検証しましょう。
片方が上手くできることがわかったら、そのあとでもう片方の手順に取り組み、最終的に両者を組み合わせることで軍艦巻きを作れるようになるはずです。

ではどちらの手順から取りかかるべきか、という問いが残ります。
より簡単なほう、もしくは難しいほうを先に選ぶのもひとつの考え方ですが、@<em>{どちらをやったほうがより軍艦巻きに近づけるのか}を考えることが大事だと思います。
ようは寄与度というやつですね。
その答えは最終的なゴールや目的によって変わってくるものだと思っています。
形から入る必要があるのであれば前者を選ぶべきですし、味にこだわるのであれば後者が優先されるでしょう。

上の例では2つの不確定要素を扱いましたが、3つ以上の場合も同様です。不確定要素をひとつずつ取り扱うことで失敗する可能性も下がりますし、万が一失敗したとしても、どこがまずかったかの切り分けが容易になります。

//footnote[rebuildhak][エンジニアの中でも、とくにPodcastに近しい人たちの間では、寿司に例えることは様式美となっています: https://rebuild.fm/people/hak/]

=== 日々の生活に波を作らない

目標達成に向けて、毎日同じくらい頑張れるのがいいなと考えています。
たとえ今日頑張って進捗を作ったとしても、翌日にやる気が出なくなってしまっては元も子もありません。
毎日コンスタントに進めていくほうが、結果的には時間効率が良くなると考えています。

この章では目標設定にはあえて踏み込んでいませんが、目標の上位にある目的に「自身の成長」を置いている人にとって、あるいは自分なりの成長の機会を開拓し続けている人にとって、波のない生活というのは相性が良いようです。
たとえばプロゲーマーのウメハラこと梅原大吾の著書『勝ち続ける意志力』@<fn>{umehara}、または作家の佐々木典士の著書『ぼくたちは習慣で、できている』@<fn>{sasaki}では、著者の一日のスケジュールが示されるとともに「大会が近づいても、このサイクルを変えることはない」「土日や祝日も変わらず、ほぼ同じような毎日を過ごしている」との記述が出てきます。
今日は二倍頑張るからそのぶん明日はお休み、とするのではなく、文字通り毎日を成長もしくはその機会とするほうが良い、ということなのだと思います。
そしてそれを満足しようとすると、自然と似たような毎日の繰り返しになっていくのでしょう。

//footnote[umehara][梅原大吾『勝ち続ける意志力』小学館101新書、2012年]
//footnote[sasaki][佐々木典士『ぼくたちは習慣で、できている』ワニブックス、2018年]

こうした生活に波を作らない・日々のペースを崩さないためには、@<em>{朝起きる時間をなるべく変えない}ことが大事だと考えています。
早起きを勧める書籍や情報はいくらでもありますし、筆者自身も早起きを旨としていますが、上で挙げた梅原氏（10時起床、27時就寝）をはじめ反例もまた数多く見つかります。
早起きできるかどうかは遺伝的要因によって決まるという研究結果@<fn>{earlybird}もあります。
なので朝遅く起きるのも人それぞれでいいけれど、でも起きる時間はなるべく変えない、というのが筆者の主張になります。
これを転じて、起きる時間を変えずに睡眠時間を確保するためには、@<em>{寝る時間を変えないようにする}ということを心がけています。

//footnote[earlybird][朝起きられないのは遺伝子のせい？ 関連遺伝子327個を新たに特定: https://www.afpbb.com/articles/-/3208824]

以下は寝る時間を変えないことに直接寄与するものではありませんが、それでも睡眠への意識を高め、早く寝て・質の良い睡眠を得るのに有効だと感じている習慣です。

 * 活動量計とスマートフォンアプリを使った日々の睡眠時間・睡眠の質の記録
 * 「10-3-2-1-0」ルール@<fn>{mehori}で眠りの質を確保する
 * 眠りの質を悪くしがちなもの（アルコール、カフェインなど）を控える

//footnote[mehori][朝からフルパワーを出すための、就寝前の「10-3-2-1-0」ルール: https://lifehacking.jp/2016/03/103-2-1-0-rule/]

せっかく楽しく起きているのに寝るのはもったいない、と感じているのであれば、睡眠が楽しくなるような工夫を凝らしましょう。
いつもの枕をいい抱き枕に替える、お声のよろしいBGMやASMRを流す、リラックスできるアロマを焚く、眠りの質を良くするとされるグリシン（アミノ酸の一種）のサプリメントを摂る（甘味があるので少しだけハッピーになります）、といった五感に訴えかける色々な方法があります。
また、夢日記を書くことも睡眠を振り返り、楽しくするのに良さそうです。
夢の内容をまとめることで本が一冊できていた、という生産的な事例@<fn>{konel}も見つかります。
起きているとき以上の楽しみが睡眠から見いだせるようになればしめたものです。

//footnote[konel][konel『この前見た夢』2014年 https://konel-works.com/yume/]

== おわりに

筆者自身が目標を立てるのが苦手ということもあり、目標設定そのものではなく、その周辺にある話題について書かせていただきました。

前半では目標設定以前にあるマニフェストについて、個人的な経験を踏まえて解説しました。普段の自分の価値観を言葉にすることで明確化し、緩やかにポジションをとって日々を過ごすのは割と楽しいものです。

後半では目標設定以後として、目標をこなしていくときの筆者の心がけを紹介しました。奇をてらわない・地味なものであっても、そうしたものが目標達成へと進む一歩ずつの繰り返しを支えてくれるものと信じています。

冒頭でも述べた通り、これが正解と主張するものではありませんので、ひとつの考え方として、また自分なりの方法を模索するうえで参考にしていただければと思います。
