{"changed":true,"filter":false,"title":"test6.cpp","tooltip":"/Project1/test6.cpp","value":"#include <iostream>\n#include <cmath>\n#include <cstdlib>\n#include <unistd.h>\n#include <stdio.h>\nusing namespace std; \n\nint computerTotal = 0;\nint playerTotal = 0;\n\n\nint rollDie()\n{\n\treturn random() % 6 + 1; \n}\n\n// your 3 + functions go in here\n\nstring playerAnswer() {\n\tstring answer = \" \";\n\tcout << \"Do you want to roll a dice (Y/N)?: \" << endl;\n\tcin >> answer;\n\treturn answer;\n}\n\nstring playerAnswer2() {\n    string answer2 = \" \";\n    cout << \"Do you want to roll again (Y/N)?: \" << endl;\n    cin >> answer2;\n    return answer2;\n}\n\nint playerTurn(string ans) {\n    int playerturnTotal = 0;\n    \n    if (ans == \"Y\" || ans == \"y\") {\n\t\twhile ((ans == \"Y\" || ans == \"y\") && playerTotal <= 80) {\n\t\t\tint roll = rollDie();\n\t\t\tcout << \"You rolled a \" << roll << endl;\n\t\t\tif (roll == 2 || roll == 5) {\n\t\t\t\tplayerturnTotal = 0;\n\t\t\t\tplayerTotal = playerTotal + playerturnTotal;\n\t\t\t\tcout << \"Your turn total is \" << playerturnTotal << endl;\n\t\t\t\tbreak;\n\t\t\t}\n\t\t\telse if (roll == 4) {\n\t\t\t\tplayerturnTotal =  15;\n\t\t\t\tplayerTotal = playerTotal + playerturnTotal;\n\t\t\t\tcout << \"Your turn total is \" << playerturnTotal << endl;\n\t\t\t\tbreak;\n\t\t\t}\n\t\t\telse if (roll == 1 || roll == 3 || roll == 6) {\n\t\t\t\tplayerturnTotal = playerturnTotal + roll;\n\t\t\t\tplayerTotal = playerTotal + playerturnTotal;\n\t\t\t\tcout << \"Your turn total is \" << playerturnTotal << endl;\n\t\t\t\tans = playerAnswer2();\n\t\t\t}\n    }\n}\n    cout << \"computer: \" << computerTotal << endl;\n\tcout << \"human: \" << playerTotal << endl;\n\treturn playerTotal;\n}\n\nint computerTurn() {\n    cout << \"It is now computer's turn \" << endl;\n    cout << \" \" << endl;\n    \n    int computerturnTotal = 0;\n    string yes = \"yes\";\n    \n    while (computerturnTotal < 10 && yes == \"yes\") {\n        int roll = rollDie();\n\t\tcout << \"Computer rolled a \" << roll << endl;\n\t\tif (roll == 2 || roll == 5) {\n\t\t\tcomputerturnTotal = 0;\n\t\t\tyes = \"no\";\n\t\t}\n\t\telse if (roll == 4) {\n\t\t\tcomputerturnTotal = 15;\n\t\t\tyes = \"no\";\n\t\t}\n\t\telse if (roll == 1 || roll == 3 || roll == 6) {\n\t\t\tcomputerturnTotal = computerturnTotal + roll;\n\t\t\tyes = \"yes\";\n\t\t}\n\t    cout << \"Computer turn total is \" << computerturnTotal << endl;\n\t\t \n    }\n    computerTotal = computerTotal + computerturnTotal;\n    cout << \"computer: \" << computerTotal << endl;\n    cout << \"human: \" << playerTotal << endl;\n    return computerTotal;\n}\n\n\nvoid game()\n{\n\tcout << \"Welcome to Jeopardy Dice!\" << endl;\n\tcout << \" \" << endl;\n\twhile (playerTotal <= 80 && computerTotal <= 80) {\n\t\tcout << \"It is now human's turn \" << endl;\n\t\tcout << \" \" << endl;\n\t\tstring ans = playerAnswer();\n\t\tplayerTurn(ans);\n\t\tcout << \" \" << endl;\n\t\tif (playerTotal < 80) {\n\t\t    computerTurn();\n\t\t    cout << \" \" << endl;\n\t\t}\n\t\t\n\t}\n\tif (playerTotal >= 80) {\n\t    cout << \"Congratulations! human won this round of Jeopardy Dice! \" << endl;\n\t}\n\telse if (computerTotal >= 80) {\n\t\tcout << \"Congratulations! computer won this round of Jeopardy Dice! \" << endl;\n\t}\n\t\n}\n\n\n///////////////////////////////////////////////////////////////////////////////////////////////////\n// don't change the main. \n// Once you finished please paste your code above this line \n///////////////////////////////////////////////////////////////////////////////////////////////////\n\n\nint main()\n{\n\t// start the game! \n\tgame();\n\treturn 0;\n}","undoManager":{"mark":53,"position":59,"stack":[[{"start":{"row":0,"column":0},"end":{"row":30,"column":1},"action":"insert","lines":["#include <iostream>","#include <cmath>","#include <cstdlib>","#include <unistd.h>","#include <stdio.h>","using namespace std; ","","int computerTotal = 0;","int playerTotal = 0;","","","int rollDie()","{","\treturn random() % 6 + 1; ","}","","// your 3 + functions go in here","","string playerAnswer() {","\tstring answer = \" \";","\tcout << \"Do you want to roll a dice (Y/N)?: \" << endl;","\tcin >> answer;","\treturn answer;","}","","string playerAnswer2() {","    string answer2 = \" \";","    cout << \"Do you want to roll again (Y/N)?: \" << endl;","    cin >> answer2;","    return answer2;","}"],"id":1}],[{"start":{"row":30,"column":1},"end":{"row":31,"column":0},"action":"insert","lines":["",""],"id":2},{"start":{"row":31,"column":0},"end":{"row":32,"column":0},"action":"insert","lines":["",""]}],[{"start":{"row":32,"column":0},"end":{"row":63,"column":1},"action":"insert","lines":["int playerTurn(string ans) {","\t","\tint playerturnTotal = 0;","\t","\tif (ans == \"Y\" || ans == \"y\") {","\t\twhile ((ans == \"Y\" || ans == \"y\") && playerTotal <= 80) {","\t\t\tint roll = rollDie();","\t\t\tcout << \"You rolled a \" << roll << endl;","\t\t\tif (roll == 2 || roll == 5) {","\t\t\t\tplayerturnTotal = 0;","\t\t\t\tplayerTotal = playerTotal + playerturnTotal;","\t\t\t\tcout << \"Your turn total is \" << playerturnTotal << endl;","\t\t\t}","\t\t\telse if (roll == 4) {","\t\t\t\tplayerturnTotal =  15;","\t\t\t\tplayerTotal = playerTotal + playerturnTotal;","\t\t\t\tcout << \"Your turn total is \" << playerturnTotal << endl;","\t\t\t}","\t\t\telse if (roll == 1 || roll == 3 || roll == 6) {","\t\t\t\tplayerturnTotal = playerturnTotal + roll;","\t\t\t\tplayerTotal = playerTotal + playerturnTotal;","\t\t\t\tcout << \"Your turn total is \" << playerturnTotal << endl;","\t\t\t\tans = playerAnswer2();","\t\t\t}","\t\t\tans = \"n\";","\t\t}","\t}","    ","    cout << \"computer: \" << computerTotal << endl;","\tcout << \"human: \" << playerTotal << endl;","\treturn playerTotal;","}"],"id":3}],[{"start":{"row":32,"column":0},"end":{"row":32,"column":1},"action":"insert","lines":["/"],"id":4},{"start":{"row":32,"column":1},"end":{"row":32,"column":2},"action":"insert","lines":["*"]}],[{"start":{"row":32,"column":2},"end":{"row":32,"column":3},"action":"insert","lines":[" "],"id":5}],[{"start":{"row":63,"column":1},"end":{"row":64,"column":0},"action":"insert","lines":["",""],"id":6},{"start":{"row":64,"column":0},"end":{"row":65,"column":0},"action":"insert","lines":["",""]},{"start":{"row":65,"column":0},"end":{"row":65,"column":1},"action":"insert","lines":["*"]},{"start":{"row":65,"column":1},"end":{"row":65,"column":2},"action":"insert","lines":["/"]}],[{"start":{"row":65,"column":2},"end":{"row":66,"column":0},"action":"insert","lines":["",""],"id":7},{"start":{"row":66,"column":0},"end":{"row":67,"column":0},"action":"insert","lines":["",""]}],[{"start":{"row":67,"column":0},"end":{"row":103,"column":1},"action":"insert","lines":["void game()","{","\tcout << \"Welcome to Jeopardy Dice!\" << endl;","\tcout << \" \" << endl;","\twhile (playerTotal <= 80 && computerTotal <= 80) {","\t\tcout << \"It is now human's turn \" << endl;","\t\tcout << \" \" << endl;","\t\tstring ans = playerAnswer();","\t\tplayerTurn(ans);","\t\tcout << \" \" << endl;","\t\tif (playerTotal < 80) {","\t\t    computerTurn();","\t\t    cout << \" \" << endl;","\t\t}","\t}","\tif (playerTotal >= 80) {","\t    cout << \"Congratulations! human won this round of Jeopardy Dice! \" << endl;","\t}","\telse if (computerTotal >= 80) {","\t\tcout << \"Congratulations! computer won this round of Jeopardy Dice! \" << endl;","\t}","\t","}","","","///////////////////////////////////////////////////////////////////////////////////////////////////","// don't change the main. ","// Once you finished please paste your code above this line ","///////////////////////////////////////////////////////////////////////////////////////////////////","","","int main()","{","\t// start the game! ","\tgame();","\treturn 0;","}"],"id":8}],[{"start":{"row":77,"column":2},"end":{"row":77,"column":3},"action":"insert","lines":["/"],"id":9},{"start":{"row":77,"column":3},"end":{"row":77,"column":4},"action":"insert","lines":["*"]}],[{"start":{"row":77,"column":4},"end":{"row":77,"column":5},"action":"insert","lines":[" "],"id":10}],[{"start":{"row":80,"column":3},"end":{"row":81,"column":0},"action":"insert","lines":["",""],"id":11},{"start":{"row":81,"column":0},"end":{"row":81,"column":2},"action":"insert","lines":["\t\t"]},{"start":{"row":81,"column":2},"end":{"row":81,"column":3},"action":"insert","lines":["*"]},{"start":{"row":81,"column":3},"end":{"row":81,"column":4},"action":"insert","lines":["/"]}],[{"start":{"row":31,"column":0},"end":{"row":32,"column":0},"action":"insert","lines":["",""],"id":12},{"start":{"row":32,"column":0},"end":{"row":32,"column":1},"action":"insert","lines":["i"]},{"start":{"row":32,"column":1},"end":{"row":32,"column":2},"action":"insert","lines":["n"]},{"start":{"row":32,"column":2},"end":{"row":32,"column":3},"action":"insert","lines":["t"]}],[{"start":{"row":32,"column":3},"end":{"row":32,"column":4},"action":"insert","lines":[" "],"id":13},{"start":{"row":32,"column":4},"end":{"row":32,"column":5},"action":"insert","lines":["p"]},{"start":{"row":32,"column":5},"end":{"row":32,"column":6},"action":"insert","lines":["l"]},{"start":{"row":32,"column":6},"end":{"row":32,"column":7},"action":"insert","lines":["a"]},{"start":{"row":32,"column":7},"end":{"row":32,"column":8},"action":"insert","lines":["y"]},{"start":{"row":32,"column":8},"end":{"row":32,"column":9},"action":"insert","lines":["e"]},{"start":{"row":32,"column":9},"end":{"row":32,"column":10},"action":"insert","lines":["r"]},{"start":{"row":32,"column":10},"end":{"row":32,"column":11},"action":"insert","lines":["t"]},{"start":{"row":32,"column":11},"end":{"row":32,"column":12},"action":"insert","lines":["u"]},{"start":{"row":32,"column":12},"end":{"row":32,"column":13},"action":"insert","lines":["r"]},{"start":{"row":32,"column":13},"end":{"row":32,"column":14},"action":"insert","lines":["n"]}],[{"start":{"row":32,"column":14},"end":{"row":32,"column":16},"action":"insert","lines":["()"],"id":14}],[{"start":{"row":32,"column":10},"end":{"row":32,"column":11},"action":"remove","lines":["t"],"id":15}],[{"start":{"row":32,"column":10},"end":{"row":32,"column":11},"action":"insert","lines":["T"],"id":16}],[{"start":{"row":32,"column":15},"end":{"row":32,"column":16},"action":"insert","lines":["s"],"id":17},{"start":{"row":32,"column":16},"end":{"row":32,"column":17},"action":"insert","lines":["t"]},{"start":{"row":32,"column":17},"end":{"row":32,"column":18},"action":"insert","lines":["r"]},{"start":{"row":32,"column":18},"end":{"row":32,"column":19},"action":"insert","lines":["i"]},{"start":{"row":32,"column":19},"end":{"row":32,"column":20},"action":"insert","lines":["n"]},{"start":{"row":32,"column":20},"end":{"row":32,"column":21},"action":"insert","lines":["g"]}],[{"start":{"row":32,"column":21},"end":{"row":32,"column":22},"action":"insert","lines":[" "],"id":18},{"start":{"row":32,"column":22},"end":{"row":32,"column":23},"action":"insert","lines":["a"]},{"start":{"row":32,"column":23},"end":{"row":32,"column":24},"action":"insert","lines":["n"]},{"start":{"row":32,"column":24},"end":{"row":32,"column":25},"action":"insert","lines":["s"]}],[{"start":{"row":32,"column":26},"end":{"row":32,"column":27},"action":"insert","lines":[" "],"id":19},{"start":{"row":32,"column":27},"end":{"row":32,"column":28},"action":"insert","lines":["{"]}],[{"start":{"row":32,"column":28},"end":{"row":34,"column":1},"action":"insert","lines":["","    ","}"],"id":20}],[{"start":{"row":33,"column":4},"end":{"row":33,"column":5},"action":"insert","lines":["i"],"id":21},{"start":{"row":33,"column":5},"end":{"row":33,"column":6},"action":"insert","lines":["n"]},{"start":{"row":33,"column":6},"end":{"row":33,"column":7},"action":"insert","lines":["t"]}],[{"start":{"row":33,"column":7},"end":{"row":33,"column":8},"action":"insert","lines":[" "],"id":22},{"start":{"row":33,"column":8},"end":{"row":33,"column":9},"action":"insert","lines":["p"]},{"start":{"row":33,"column":9},"end":{"row":33,"column":10},"action":"insert","lines":["l"]},{"start":{"row":33,"column":10},"end":{"row":33,"column":11},"action":"insert","lines":["a"]},{"start":{"row":33,"column":11},"end":{"row":33,"column":12},"action":"insert","lines":["y"]},{"start":{"row":33,"column":12},"end":{"row":33,"column":13},"action":"insert","lines":["e"]},{"start":{"row":33,"column":13},"end":{"row":33,"column":14},"action":"insert","lines":["r"]}],[{"start":{"row":33,"column":14},"end":{"row":33,"column":15},"action":"insert","lines":["t"],"id":23},{"start":{"row":33,"column":15},"end":{"row":33,"column":16},"action":"insert","lines":["u"]},{"start":{"row":33,"column":16},"end":{"row":33,"column":17},"action":"insert","lines":["r"]},{"start":{"row":33,"column":17},"end":{"row":33,"column":18},"action":"insert","lines":["n"]}],[{"start":{"row":33,"column":8},"end":{"row":33,"column":18},"action":"remove","lines":["playerturn"],"id":24},{"start":{"row":33,"column":8},"end":{"row":33,"column":23},"action":"insert","lines":["playerturnTotal"]}],[{"start":{"row":33,"column":23},"end":{"row":33,"column":24},"action":"insert","lines":[" "],"id":25},{"start":{"row":33,"column":24},"end":{"row":33,"column":25},"action":"insert","lines":["="]}],[{"start":{"row":33,"column":25},"end":{"row":33,"column":26},"action":"insert","lines":[" "],"id":26},{"start":{"row":33,"column":26},"end":{"row":33,"column":27},"action":"insert","lines":["0"]},{"start":{"row":33,"column":27},"end":{"row":33,"column":28},"action":"insert","lines":[";"]}],[{"start":{"row":33,"column":28},"end":{"row":34,"column":0},"action":"insert","lines":["",""],"id":27},{"start":{"row":34,"column":0},"end":{"row":34,"column":4},"action":"insert","lines":["    "]},{"start":{"row":34,"column":4},"end":{"row":35,"column":0},"action":"insert","lines":["",""]},{"start":{"row":35,"column":0},"end":{"row":35,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":34,"column":4},"end":{"row":35,"column":0},"action":"insert","lines":["",""],"id":28},{"start":{"row":35,"column":0},"end":{"row":35,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":35,"column":4},"end":{"row":43,"column":4},"action":"insert","lines":["if (ans == \"Y\" || ans == \"y\") {","\t\twhile ((ans == \"Y\" || ans == \"y\") && playerTotal <= 80) {","\t\t\tint roll = rollDie();","\t\t\tcout << \"You rolled a \" << roll << endl;","\t\t\tif (roll == 2 || roll == 5) {","\t\t\t\tplayerturnTotal = 0;","\t\t\t\tplayerTotal = playerTotal + playerturnTotal;","\t\t\t\tcout << \"Your turn total is \" << playerturnTotal << endl;","\t\t\t}"],"id":29}],[{"start":{"row":43,"column":4},"end":{"row":44,"column":0},"action":"insert","lines":["",""],"id":30},{"start":{"row":44,"column":0},"end":{"row":44,"column":3},"action":"insert","lines":["\t\t\t"]}],[{"start":{"row":44,"column":3},"end":{"row":54,"column":4},"action":"insert","lines":["else if (roll == 4) {","\t\t\t\tplayerturnTotal =  15;","\t\t\t\tplayerTotal = playerTotal + playerturnTotal;","\t\t\t\tcout << \"Your turn total is \" << playerturnTotal << endl;","\t\t\t}","\t\t\telse if (roll == 1 || roll == 3 || roll == 6) {","\t\t\t\tplayerturnTotal = playerturnTotal + roll;","\t\t\t\tplayerTotal = playerTotal + playerturnTotal;","\t\t\t\tcout << \"Your turn total is \" << playerturnTotal << endl;","\t\t\t\tans = playerAnswer2();","\t\t\t}"],"id":31}],[{"start":{"row":54,"column":4},"end":{"row":55,"column":0},"action":"insert","lines":["",""],"id":32},{"start":{"row":55,"column":0},"end":{"row":55,"column":3},"action":"insert","lines":["\t\t\t"]}],[{"start":{"row":55,"column":2},"end":{"row":55,"column":3},"action":"remove","lines":["\t"],"id":33},{"start":{"row":55,"column":1},"end":{"row":55,"column":2},"action":"remove","lines":["\t"]},{"start":{"row":55,"column":0},"end":{"row":55,"column":1},"action":"remove","lines":["\t"]},{"start":{"row":54,"column":4},"end":{"row":55,"column":0},"action":"remove","lines":["",""]}],[{"start":{"row":56,"column":1},"end":{"row":57,"column":0},"action":"insert","lines":["",""],"id":34}],[{"start":{"row":55,"column":1},"end":{"row":55,"column":2},"action":"remove","lines":[" "],"id":35},{"start":{"row":55,"column":0},"end":{"row":55,"column":1},"action":"remove","lines":[" "]},{"start":{"row":54,"column":4},"end":{"row":55,"column":2},"action":"remove","lines":["","  "]}],[{"start":{"row":55,"column":1},"end":{"row":56,"column":0},"action":"insert","lines":["",""],"id":36},{"start":{"row":56,"column":0},"end":{"row":56,"column":1},"action":"insert","lines":["}"]}],[{"start":{"row":56,"column":1},"end":{"row":57,"column":0},"action":"insert","lines":["",""],"id":37},{"start":{"row":57,"column":0},"end":{"row":57,"column":1},"action":"insert","lines":["}"]}],[{"start":{"row":55,"column":0},"end":{"row":55,"column":4},"action":"insert","lines":["    "],"id":38}],[{"start":{"row":56,"column":0},"end":{"row":56,"column":4},"action":"insert","lines":["    "],"id":39}],[{"start":{"row":56,"column":0},"end":{"row":56,"column":4},"action":"remove","lines":["    "],"id":40}],[{"start":{"row":53,"column":26},"end":{"row":53,"column":27},"action":"insert","lines":["y"],"id":41}],[{"start":{"row":53,"column":26},"end":{"row":53,"column":27},"action":"remove","lines":["y"],"id":42},{"start":{"row":53,"column":26},"end":{"row":53,"column":27},"action":"insert","lines":["y"]}],[{"start":{"row":53,"column":26},"end":{"row":53,"column":27},"action":"remove","lines":["y"],"id":43}],[{"start":{"row":42,"column":61},"end":{"row":43,"column":0},"action":"insert","lines":["",""],"id":44},{"start":{"row":43,"column":0},"end":{"row":43,"column":4},"action":"insert","lines":["\t\t\t\t"]},{"start":{"row":43,"column":4},"end":{"row":43,"column":5},"action":"insert","lines":["b"]},{"start":{"row":43,"column":5},"end":{"row":43,"column":6},"action":"insert","lines":["r"]},{"start":{"row":43,"column":6},"end":{"row":43,"column":7},"action":"insert","lines":["e"]},{"start":{"row":43,"column":7},"end":{"row":43,"column":8},"action":"insert","lines":["a"]}],[{"start":{"row":43,"column":8},"end":{"row":43,"column":9},"action":"insert","lines":["k"],"id":45},{"start":{"row":43,"column":9},"end":{"row":43,"column":10},"action":"insert","lines":[";"]}],[{"start":{"row":57,"column":1},"end":{"row":58,"column":0},"action":"insert","lines":["",""],"id":46}],[{"start":{"row":58,"column":0},"end":{"row":58,"column":4},"action":"insert","lines":["    "],"id":47}],[{"start":{"row":58,"column":4},"end":{"row":60,"column":20},"action":"insert","lines":[" cout << \"computer: \" << computerTotal << endl;","\tcout << \"human: \" << playerTotal << endl;","\treturn playerTotal;"],"id":48}],[{"start":{"row":58,"column":4},"end":{"row":58,"column":5},"action":"remove","lines":[" "],"id":49}],[{"start":{"row":61,"column":1},"end":{"row":62,"column":0},"action":"insert","lines":["",""],"id":50},{"start":{"row":62,"column":0},"end":{"row":63,"column":0},"action":"insert","lines":["",""]}],[{"start":{"row":63,"column":0},"end":{"row":92,"column":1},"action":"insert","lines":["int computerTurn() {","    cout << \"It is now computer's turn \" << endl;","    cout << \" \" << endl;","    ","    int computerturnTotal = 0;","    string yes = \"yes\";","    ","    while (computerturnTotal < 10 && yes == \"yes\") {","        int roll = rollDie();","\t\tcout << \"Computer rolled a \" << roll << endl;","\t\tif (roll == 2 || roll == 5) {","\t\t\tcomputerturnTotal = 0;","\t\t\tyes = \"no\";","\t\t}","\t\telse if (roll == 4) {","\t\t\tcomputerturnTotal = 15;","\t\t\tyes = \"no\";","\t\t}","\t\telse if (roll == 1 || roll == 3 || roll == 6) {","\t\t\tcomputerturnTotal = computerturnTotal + roll;","\t\t\tyes = \"yes\";","\t\t}","\t    cout << \"Computer turn total is \" << computerturnTotal << endl;","\t\t ","    }","    computerTotal = computerTotal + computerturnTotal;","    cout << \"computer: \" << computerTotal << endl;","    cout << \"human: \" << playerTotal << endl;","    return computerTotal;","}"],"id":51}],[{"start":{"row":139,"column":4},"end":{"row":139,"column":5},"action":"remove","lines":[" "],"id":52},{"start":{"row":139,"column":3},"end":{"row":139,"column":4},"action":"remove","lines":["*"]},{"start":{"row":139,"column":2},"end":{"row":139,"column":3},"action":"remove","lines":["/"]}],[{"start":{"row":143,"column":3},"end":{"row":143,"column":4},"action":"remove","lines":["/"],"id":53},{"start":{"row":143,"column":2},"end":{"row":143,"column":3},"action":"remove","lines":["*"]}],[{"start":{"row":48,"column":61},"end":{"row":49,"column":0},"action":"insert","lines":["",""],"id":54},{"start":{"row":49,"column":0},"end":{"row":49,"column":4},"action":"insert","lines":["\t\t\t\t"]},{"start":{"row":49,"column":4},"end":{"row":49,"column":5},"action":"insert","lines":["b"]},{"start":{"row":49,"column":5},"end":{"row":49,"column":6},"action":"insert","lines":["r"]},{"start":{"row":49,"column":6},"end":{"row":49,"column":7},"action":"insert","lines":["e"]},{"start":{"row":49,"column":7},"end":{"row":49,"column":8},"action":"insert","lines":["a"]},{"start":{"row":49,"column":8},"end":{"row":49,"column":9},"action":"insert","lines":["k"]},{"start":{"row":49,"column":9},"end":{"row":49,"column":10},"action":"insert","lines":[";"]}],[{"start":{"row":94,"column":0},"end":{"row":128,"column":2},"action":"remove","lines":["","/* int playerTurn(string ans) {","\t","\tint playerturnTotal = 0;","\t","\tif (ans == \"Y\" || ans == \"y\") {","\t\twhile ((ans == \"Y\" || ans == \"y\") && playerTotal <= 80) {","\t\t\tint roll = rollDie();","\t\t\tcout << \"You rolled a \" << roll << endl;","\t\t\tif (roll == 2 || roll == 5) {","\t\t\t\tplayerturnTotal = 0;","\t\t\t\tplayerTotal = playerTotal + playerturnTotal;","\t\t\t\tcout << \"Your turn total is \" << playerturnTotal << endl;","\t\t\t}","\t\t\telse if (roll == 4) {","\t\t\t\tplayerturnTotal =  15;","\t\t\t\tplayerTotal = playerTotal + playerturnTotal;","\t\t\t\tcout << \"Your turn total is \" << playerturnTotal << endl;","\t\t\t}","\t\t\telse if (roll == 1 || roll == 3 || roll == 6) {","\t\t\t\tplayerturnTotal = playerturnTotal + roll;","\t\t\t\tplayerTotal = playerTotal + playerturnTotal;","\t\t\t\tcout << \"Your turn total is \" << playerturnTotal << endl;","\t\t\t\tans = playerAnswer2();","\t\t\t}","\t\t\tans = \"n\";","\t\t}","\t}","    ","    cout << \"computer: \" << computerTotal << endl;","\tcout << \"human: \" << playerTotal << endl;","\treturn playerTotal;","}","","*/"],"id":55}],[{"start":{"row":51,"column":50},"end":{"row":52,"column":0},"action":"insert","lines":["",""],"id":56},{"start":{"row":52,"column":0},"end":{"row":52,"column":7},"action":"insert","lines":["\t\t\t    "]},{"start":{"row":52,"column":7},"end":{"row":52,"column":8},"action":"insert","lines":["p"]},{"start":{"row":52,"column":8},"end":{"row":52,"column":9},"action":"insert","lines":["l"]}],[{"start":{"row":52,"column":8},"end":{"row":52,"column":9},"action":"remove","lines":["l"],"id":57},{"start":{"row":52,"column":7},"end":{"row":52,"column":8},"action":"remove","lines":["p"]}],[{"start":{"row":52,"column":7},"end":{"row":52,"column":8},"action":"insert","lines":["p"],"id":58},{"start":{"row":52,"column":8},"end":{"row":52,"column":9},"action":"insert","lines":["l"]},{"start":{"row":52,"column":9},"end":{"row":52,"column":10},"action":"insert","lines":["a"]},{"start":{"row":52,"column":10},"end":{"row":52,"column":11},"action":"insert","lines":["y"]},{"start":{"row":52,"column":11},"end":{"row":52,"column":12},"action":"insert","lines":["e"]},{"start":{"row":52,"column":12},"end":{"row":52,"column":13},"action":"insert","lines":["r"]}],[{"start":{"row":52,"column":12},"end":{"row":52,"column":13},"action":"remove","lines":["r"],"id":59},{"start":{"row":52,"column":11},"end":{"row":52,"column":12},"action":"remove","lines":["e"]},{"start":{"row":52,"column":10},"end":{"row":52,"column":11},"action":"remove","lines":["y"]},{"start":{"row":52,"column":9},"end":{"row":52,"column":10},"action":"remove","lines":["a"]},{"start":{"row":52,"column":8},"end":{"row":52,"column":9},"action":"remove","lines":["l"]},{"start":{"row":52,"column":7},"end":{"row":52,"column":8},"action":"remove","lines":["p"]},{"start":{"row":52,"column":6},"end":{"row":52,"column":7},"action":"remove","lines":[" "]},{"start":{"row":52,"column":5},"end":{"row":52,"column":6},"action":"remove","lines":[" "]},{"start":{"row":52,"column":4},"end":{"row":52,"column":5},"action":"remove","lines":[" "]},{"start":{"row":52,"column":3},"end":{"row":52,"column":4},"action":"remove","lines":[" "]},{"start":{"row":52,"column":2},"end":{"row":52,"column":3},"action":"remove","lines":["\t"]},{"start":{"row":52,"column":1},"end":{"row":52,"column":2},"action":"remove","lines":["\t"]},{"start":{"row":52,"column":0},"end":{"row":52,"column":1},"action":"remove","lines":["\t"]}],[{"start":{"row":51,"column":50},"end":{"row":52,"column":0},"action":"remove","lines":["",""],"id":60}]]},"ace":{"folds":[],"scrolltop":1738,"scrollleft":0,"selection":{"start":{"row":0,"column":0},"end":{"row":133,"column":1},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":55,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1550287469727}