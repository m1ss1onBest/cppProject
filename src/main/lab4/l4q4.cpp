        #include <iomanip>
        #include <iostream>
        using namespace std;
        //var 27 = 11/16


        void L4Q4()
        {
            int
            //
            answer = 0,
            //consts
            b, c, a ,
            //result
            aFixed;
            
           cout <<
            "enter encrypted numbers to calculate an equation when b, c = [0; 9]\n"
            "1 -> 2; 2 -> 4; 3 -> 6; 4 -> 8; 5 -> 0;\n"
            "6 -> 9; 7 -> 7; 8 -> 5; 9 -> 3; 0 -> 1\n";

            if(!(cin >> b >> c) || b > 9 || b < 0 || c < 0 || c > 9)
            {
                cout << "input error";
            }
            else
            {
                //encoder
                switch(b)
                {
                case 0:b = 1;break;
                case 1:b = 2;break;
                case 2:b = 4;break;
                case 3:b = 6;break;
                case 4:b = 8;break;
                case 5:b = 0;break;
                case 6:b = 9;break;
                case 8:b = 5;break;
                case 9:b = 3;break;
                }
                //encoder
                switch(c)
                {
                case 0:c = 1;break;
                case 1:c = 2;break;
                case 2:c = 4;break;
                case 3:c = 6;break;
                case 4:c = 8;break;
                case 5:c = 0;break;
                case 6:c = 9;break;
                case 8:c = 5;break;
                case 9:c = 3;break;
                }
                cout << "b: " << b << "; c:" << c << "\n";

                //calculating the answer
                for(int i = 1; i <= 10; ++i)
                {
                    a = (b * i + 2 * (pow(c - i, i)));
                    aFixed = a % 10;
                    answer += aFixed;
                }
            }
            //decoder
            switch (answer)
            {
            //decoder part 1
            case 0:answer = 1;break;
            case 1:answer = 2;break;
            case 2:answer = 4;break;
            case 3:answer = 6;break;
            case 4:answer = 8;break;
            case 5:answer = 0;break;
            case 6:answer = 9;break;
            case 8:answer = 5;break;
            case 9:answer = 3;break;
            //decoder part 2
            case -1:answer = -2;break;
            case -2:answer = -4;break;
            case -3:answer = -6;break;
            case -4:answer = -8;break;
            case -5:answer = -0;break;
            case -6:answer = -9;break;
            case -8:answer = -5;break;
            case -9:answer = -3;break;
            }
            cout << answer;
        }