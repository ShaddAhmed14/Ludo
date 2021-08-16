#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <ctime>
#include <stdlib.h>



using namespace std;

void ludoboard(int line,int no_of_players, string colour[], string places[][4], string blue_piece[],string yellow_piece[],string green_piece[],string red_piece[],string yellow_home[][4], string red_home[][4], string green_home[][4], string blue_home[][4])
{
    //Line 1
    cout << ++line << " ";
    for(int x=0; x<=110; x++)
    {
        cout << "#";
    }
//line 2
    cout <<"\n" <<++line;
    cout <<" #"  << setw(36)<<"# ";
    for (int n=0; n<4; n++)
    {
        cout << places[10][n];
    }
    cout << "   # ";
    for (int n=0; n<4; n++)
    {
        cout << places[11][n];
    }
    cout << "   # ";
    for (int n=0; n<4; n++)
    {
        cout << places[12][n];
    }
    cout << "   #" << setw(36) << "#"<<endl;

//Line 3
    cout << ++line;
    cout <<" #"<< setw(35);
    for(int x=0; x<40; x++)
    {
        cout << "#";
    }
    cout << setw(36)<<"#"<<endl;
//Line 4

   cout <<  ++line;
   cout <<" #"<< setw(36)<<"# ";
   for (int n=0; n<4; n++)
    {
        cout << places[9][n];
    }
    cout << "  ##  ";
    for (int n=0; n<4; n++)
    {
        cout << yellow_home[0][n];
    }
    cout << " ## ";
    for (int n=0; n<4; n++)
    {
        cout << places[13][n];
    }
    cout << "  ##";
    cout << setw(36);
    cout << "#"<<endl;
//Line 5,6,7
    for (int x=1;x<=3;x++)
    {
        cout << ++line;
        cout <<" #"<<setw(35)<< "#" << setw(13) << "##" << setw(14) << "## ";
        cout <<setw(12)<< "  ##" << setw(36) << "#"<<endl;
    }
//Line 8
    cout << ++line;
    cout <<" #"<< setw(35);
    for(int x=0; x<40; x++)
    {
        cout << "#";
    }
    cout << setw(36)<< "#"<<endl;

//Line 9
    cout <<++line;
    cout <<" #" << setw(15);
    cout <<blue_piece[1] << " | " <<blue_piece[2];
    cout << setw(17)<< "## ";
    for (int n=0; n<4; n++)
    {
        cout << places[8][n];
    }
    cout << " ## ";
    for (int n=0; n<4; n++)
    {
        cout << yellow_home[1][n];
    }
    cout << "  ## ";
    for (int n=0; n<4; n++)
    {
        cout << places[14][n];
    }

    cout << "   #" << setw(15)<<yellow_piece[1] << " | " <<yellow_piece[2]<< setw(16)<< "#"<<endl;

//Line 10,11,12

for (int x=1;x<=3;x++)
    {
        cout <<++line;
        cout <<"#"<<setw(35)<< "#" << setw(13) << "##" << setw(14) << "## ";
        cout <<setw(12)<< "  ##" << setw(36) << "#"<<endl;
    }
//Line 13
    cout <<++line;
    cout <<"#"<< setw(35);
    for(int x=0; x<40; x++)
    {
        cout << "#";
    }
    cout << setw(36)<< "#"<<endl;
//Line 14
    cout <<++line;
    cout <<"#"<< setw(15) <<blue_piece[3] << " | " <<blue_piece[4] << setw(16) <<"# ";
    for (int n=0; n<4; n++)
    {
        cout << places[7][n];
    }
    cout << "  ##";
    for (int n=0; n<4; n++)
    {
        cout << yellow_home[2][n];
    }    cout <<setw(6)<< "## ";
    for (int n=0; n<4; n++)
    {
        cout << places[15][n];
    }
    cout << "   #";
    cout << setw(15);
    cout <<yellow_piece[3] << " | " <<yellow_piece[4];
    cout << setw(16);
    cout << "#"<<endl;
//Line 15
    cout <<++line;
    cout <<"#" << setw(35);
    for(int x=0; x<40; x++)
    {
        cout << "#";
    }
    cout << setw(36)<< "#"<<endl;
//Line 16
    cout << ++line;
    cout <<"#" << setw(36) <<"# ";
    for (int n=0; n<4; n++)
    {
        cout << places[6][n];
    }
    cout << "  ## ";
    for (int n=0; n<4; n++)
    {
        cout << yellow_home[3][n];
    }
    cout << "  ## ";
    for (int n=0; n<4; n++)
    {
        cout << places[16][n];
    }
    cout << "   #" << setw(36) << "#"<<endl;
//Line 17
    cout << ++line;
    cout <<"#" << setw(35);
    for(int x=0; x<40; x++)
    {
        cout << "#";
    }
    cout << setw(36) << "#"<<endl;
//Line 18
    cout << ++line;
    cout <<"#" << setw(36) <<"# ";
    for (int n=0; n<4; n++)
    {
        cout << places[5][n];
    }
    cout << "  ## ";
    for (int n=0; n<4; n++)
    {
        cout << yellow_home[4][n];
    }
    cout << "   ## ";
    for (int n=0; n<4; n++)
    {
        cout << places[17][n];
    }
    cout << "  #" << setw(36) << " #" <<endl;
//Line 19
    cout <<++line;
    for(int x=0; x<=110; x++)
    {
        cout << "#";
    }
    cout <<endl;

// mid part

//Line 20

    cout<<++line;
    cout <<"# "<<places[51][0] << "##";
    cout << places[0][0];
    cout <<setw(9)<< "## "<<places[1][0] << " # " << places[2][0]<< " # "<<places[3][0] << " # "<<places[4][0] << " # ";
    cout << setw(39);// the gap
    cout << "# "<<places[18][0] << " #  " << places[19][0]<< " # "<<places[20][0] <<  "##";
    cout << places[21][0];
    cout <<setw(9) << "## " << places[22][0] << " # " << places[23][0] << " #"<<endl;
//Line 21
    cout<<++line;
    cout <<"# "<<places[51][1] << "##";
    cout << places[0][1];
    cout <<setw(9)<< "## "<<places[1][1] << " # " << places[2][1]<< " # "<<places[3][1] << " # "<<places[4][1] << " # ";
    cout << setw(39);// the gap
    cout << "# "<<places[18][1] << " #  " << places[19][1]<< " # "<<places[20][1] <<  "##";
    cout << places[21][1];
    cout <<setw(9) << "## " << places[22][1] << " # " << places[23][1] << " #"<<endl;
//Line 22
    cout<<++line;
    cout <<"# "<<places[51][2] << "##";
    cout << places[0][2];
    cout <<setw(9)<< "## "<<places[1][2] << " # " << places[2][2]<< " # "<<places[3][2] << " # "<<places[4][2] << " # ";
    cout << setw(39);// the gap
    cout << "# "<<places[18][2] << " #  " << places[19][2]<< " # "<<places[20][2] <<  "##";
    cout << places[21][2];
    cout <<setw(9) << "## " << places[22][2] << " # " << places[23][2] << " #"<<endl;
//Line 23
    cout<<++line;
    cout <<"# "<<places[51][3] << "##";
    cout << places[0][3];
    cout <<setw(9)<< "## "<<places[1][3] << " # " << places[2][3]<< " # "<<places[3][3] << " # "<<places[4][3] << " # ";
    cout << setw(39);// the gap
    cout << "# "<<places[18][3] << " #  " << places[19][3]<< " # "<<places[20][3] <<  "##";
    cout << places[21][3];
    cout <<setw(9) << "## " << places[22][3] << " # " << places[23][3] << " #"<<endl;
//Line 24
    cout <<++line;
    for(int x=0; x<36; x++)
    {
        cout << "#";
    }
    cout << setw(39);
    for(int x=0; x<37; x++)
    {
        cout << "#";
    }
    cout <<endl;
//Line 25
    cout <<++line;
    cout <<"#" << places[50][0]<< places[50][1] << "##"<< blue_home[0][0]<< blue_home[0][1] << "##"<< blue_home[1][0]<< blue_home[1][1];
    cout << "##"<< blue_home[2][0]<< blue_home[2][1] << "##"<< blue_home[3][0]<< blue_home[3][1]<< "##"<< blue_home[4][0]<< blue_home[4][1];
    cout << "#";
    cout << setw(39);// the gap
    cout << "#"<< red_home[4][1]<< red_home[4][0] << "##"<< red_home[3][1]<< red_home[3][0]<< "##"<< red_home[2][1]<< red_home[2][0];
    cout << "##"<< red_home[1][1]<< red_home[1][0] << "##"<< red_home[0][1]<< red_home[0][0] << "## "<< places[24][1]<< places[24][0];
    cout << "#" << endl;
//Line 26
    cout <<++line;
    cout <<"#" << places[50][2]<< places[50][3] << "##"<< blue_home[0][2]<< blue_home[0][3] << "##"<< blue_home[1][2]<< blue_home[1][3];
    cout << "##"<< blue_home[2][2]<< blue_home[2][3] << "##"<< blue_home[3][2]<< blue_home[3][3]<< "##"<< blue_home[4][2]<< blue_home[4][3];
    cout << "#";
    cout << setw(39);// the gap
    cout << "#"<< red_home[4][3]<< red_home[4][2] << "##"<< red_home[3][3]<< red_home[3][2]<< "##"<< red_home[2][3]<< red_home[2][2];
    cout << "##"<< red_home[1][3]<< red_home[1][2] << "##"<< red_home[0][3]<< red_home[0][2] << "## "<< places[24][3]<< places[24][2];
    cout << "#" << endl;
//Line 27
    cout <<++line;
    for(int x=0; x<36; x++) // two half horizontal boundaries
    {
        cout << "#";
    }
    cout << setw(39);
    for(int x=0; x<37; x++)
    {
        cout << "#";
    }
    cout <<endl;
//Line 28,29,30,31
    for (int x=0; x<4; x++)
    {
        cout <<++line;
        cout <<"# " << places[49][x] << " # " << places[48][x];
        cout << setw(4)<<"##";
        cout << places[47][x];
        cout << setw(5)<<"## " << places[46][x] << " # "<< places[45][x] <<setw(4)<< " # "<< places[44][x]<<setw(3)<< " #";
        cout << setw(40); //the gap
        cout << " # "<< places[30][x] <<setw(4) << " #  "<< places[29][x] << setw(4)<< " # "<< places[28][x] <<setw(4) << " # " << places[27][x];
        cout << setw(3) <<"##";
        cout << setw(4) <<places[26][x];
        cout << " ## "<< places[25][x]<< " #"<<endl;
    }
//Line 32
    cout <<++line;
    for(int x=0; x<=110; x++)
    {
        cout << "#";
    }
    cout << endl;

// bottom part

//Line 33
    cout <<++line;
    cout <<"#" << setw(36) <<"# ";
    for (int n=0; n<4; n++)
    {
        cout << places[43][n];
    }
    cout << "  ## ";
    for (int n=0; n<4; n++)
    {
        cout << green_home[4][n];
    }
    cout << "  ## ";
    for (int n=0; n<4; n++)
    {
        cout << places[31][n];
    }
    cout << "   #" << setw(36)<< "#"<<endl;
//Line 34
    cout <<++line;
    cout <<"#";
    cout << setw(35);
    for(int x=0; x<40; x++)
    {
        cout << "#";
    }
    cout << setw(36)<< "#"<<endl;
//Line 35
    cout <<++line;
    cout <<"#" << setw(36) <<"# ";
    for (int n=0; n<4; n++)
    {
        cout << places[42][n];
    }
    cout << "  ## ";
    for (int n=0; n<4; n++)
    {
        cout << green_home[3][n];
    }
    cout << "  ## ";
    for (int n=0; n<4; n++)
    {
        cout << places[32][n];
    }
    cout << "   #" << setw(36)<< "#"<<endl;
//Line 36
    cout <<++line;
    cout <<"#";
    cout << setw(35);
    for(int x=0; x<40; x++)
    {
        cout << "#";
    }
    cout << setw(36);
    cout << "#"<<endl;
//Line 37
    cout <<++line;

    cout <<"#" << setw(15) <<green_piece[1] << " | " <<green_piece[2] << setw(16) <<"# ";
    for (int n=0; n<4; n++)
    {
        cout << places[41][n];
    }
    cout << "  ## ";
    for (int n=0; n<4; n++)
    {
        cout << green_home[2][n];
    }
    cout << "  ## ";
    for (int n=0; n<4; n++)
    {
        cout << places[33][n];
    }

    cout << "   #" << setw(15) <<red_piece[1] << " | " <<red_piece[2] << setw(16) << "#"<<endl;
//Line 38
    cout <<++line;
    cout <<"#";
    cout << setw(35);
    for(int x=0; x<40; x++)
    {
        cout << "#";
    }
    cout << setw(36);
    cout << "#"<<endl;
//Line 39
    cout <<++line;
    cout <<"#" << setw(36) <<"# ";
    for (int n=0; n<4; n++)
    {
        cout << places[40][n];
    }
    cout << "  ## ";
    for (int n=0; n<4; n++)
    {
        cout << green_home[1][n];
    }
    cout << "  ## ";
    for (int n=0; n<4; n++)
    {
        cout << places[34][n];
    }
    cout << "  ##" << setw(36)<< "#"<<endl;
//Line 40,41
    for (int x=1; x<=2; x++)
    {
        cout <<++line;
        cout <<"#" << setw(35) <<"#"<< setw(13)<< "##" << setw(14) << "## ";
        cout <<setw(12) << "  ##" << setw(36)<< "#"<<endl;
    }
//Line 42
    cout <<++line;
    cout <<"#" << setw(15) <<green_piece[3] << " | " <<green_piece[4] << setw(15) <<"#"<< setw(14)<< "## "<<setw(13)<<"## ";
    for (int n=0; n<4; n++)
    {
        cout << "  ";
    }
    cout << "  ## " << setw(15) <<red_piece[3] << " | " <<red_piece[4];
    cout << setw(15) << "#"<<endl;
//Line 43
    cout <<++line;
    cout <<"#";
    cout << setw(35);
    for(int x=0; x<40; x++)
    {
        cout << "#";
    }
    cout << setw(36);
    cout << "#" <<endl;
//Line 44
    cout <<++line;
    cout <<"#" << setw(37) <<"## ";
    for (int n=0; n<4; n++)
    {
        cout << places[39][n];
    }
    cout << " ## ";
    for (int n=0; n<4; n++)
    {
        cout << green_home[0][n];
    }
    cout << "  ## ";
    for (int n=0; n<4; n++)
    {
        cout << places[35][n];
    }
    cout << "   #"<< setw(36) << "#"<<endl;
//Line 45,46,47
    for (int x=1; x<=3; x++)
    {
        cout <<++line;
        cout <<"#" << setw(37) <<"## ";
        for (int n=0; n<4; n++)
        {
            cout << "  ";
        }
        cout << " ##"<<setw(13) << "##"<<setw(13) << "#"<< setw(36) << "#"<<endl;
    }
//Line 48
    cout <<++line;
    cout <<"#" << setw(35);
    for(int x=0; x<40; x++)
    {
        cout << "#";
    }
    cout << setw(36) << "#"<<endl;
//Line 49
    cout <<++line;
    cout <<"#" << setw(37) <<"#  ";
    for (int n=0; n<4; n++)
    {
        cout << places[38][n];
    }
    cout << "  # ";
    for (int n=0; n<4; n++)
    {
        cout << places[37][n];
    }
    cout << "   # ";
    for (int n=0; n<4; n++)
    {
        cout << places[36][n];
    }
    cout << "   # ";
    cout << setw(35);
    cout << "#"<<endl;

    cout <<++line;
    //line 50
    for(int x=0; x<=110; x++)
    {
        cout << "#";
    }
}
void player_details(int& number, string names[], string colour[])
{
    int err=0;
cout<<"Please enter number of players( 2 to 4): ";//number of players

    do
    {
           cin>>number;
           if(cin.fail())
           {
               cin.clear();
               string s;
               getline(cin,s);
               cout<<"Please enter a number between 2 and 4"<<endl;
               err=-1;
           }
           else
           {
               err=0;
           }

    }
    while(err==-1);

    for(int i = 0; number<2 || number>4 ; i++)
    {
        cout<<"Please enter a number between 2 and 4"<<endl;
        cin>>number;
    }





    for(int i = 0; i<number ; i++)
    {
        cout<<"Please enter name of Player"<<i+1<<"(without space)"<<": ";
        string name;
        do
        {
            cin>>name;
            if((name == names[0]) || (name == names[1]) || (name == names[2]) || (name == names[3]) || (name == names[4]) )
            {
                cin.clear();
                string sn;
                getline(cin,sn);
                cout<<"2 players can't choose the same name, please enter another name"<<endl;
            }
            else{
                    names[i] = name;
                    break;
                }
        }
        while(1);
    }
    for(int i = 0; i<number ; i++)
    {
        do{
        err=0;
        cout<<"Please enter color for Player"<<i+1<<"(R for red, Y for yellow, G for green, B for blue)"<<": ";
        string s;
        do
        {
            cin>>s;
            if((s!="Y") && (s!="y") && (s!="R") && (s!="r") && (s!="G") && (s!="g") && (s!="B") && (s!="b") )
            {
                cin.clear();
                string ss;
                getline(cin,ss);
                cout<<"Please enter R,Y,B or G only"<<endl;
            }
        }while((s!="Y") && (s!="y") && (s!="R") && (s!="r") && (s!="G") && (s!="g") && (s!="B") && (s!="b") );

        if((s=="Y") || (s=="y"))
        {
                colour[i] = "Y1";
        }
        else if((s=="B") || (s=="b"))
        {
                colour[i] = "B1";
        }
        else if((s=="G") || (s=="g"))
        {
                colour[i] = "G1";
        }
        else if((s=="R") || (s=="r")){
                colour[i] = "R1";
        }


                if(i==0)
                {
                    if((colour[i] == colour[1]) || (colour[i] == colour[2]) || (colour[i] == colour[3]))
                    {
                        err=-1;
                        cout<<"2 players can't choose the same colour, please enter another colour"<<endl;
                    }
                }
                else if(i==1)
                {
                    if((colour[i] == colour[0]) || (colour[i] == colour[2]) || (colour[i] == colour[3]))
                    {
                        err=-1;
                        cout<<"2 players can't choose the same colour, please enter another colour"<<endl;
                    }
                }
                else if(i==2)
                {
                    if((colour[i] == colour[0]) || (colour[i] == colour[1]) || (colour[i] == colour[3]))
                    {
                        err=-1;
                        cout<<"2 players can't choose the same colour, please enter another colour"<<endl;
                    }
                }
                else if(i==3)
                {
                    if((colour[i] == colour[0]) || (colour[i] == colour[2]) || (colour[i] == colour[1]))
                    {
                        err=-1;
                        cout<<"2 players can't choose the same colour, please enter another colour"<<endl;
                    }

                }
        }while(err==-1);
}
}
void place_edits(string places[][4],string colour[], int i,string blue_home[][4],string yellow_home[][4], string red_home[][4], string green_home[][4], string green_piece[], string red_piece[], string blue_piece[], string yellow_piece[], int dice, bool& win, int counter[])
{

    string temp;
    int p=-1;
    int c=-1;
    int home_val=0;
    int y=0;
    int new_arr_val=0;
    bool piece_open=false;
    if(colour[i]=="B1")
    {
        if(places[0][0]=="G1" || places[0][0]=="R1" || places[0][0]=="Y1")
        {

            for(int x=0; x<4; x++)
            {
                if(places[0][x]=="  ")
                {
                    y=x;
                    break;
                }
            }
        }
        string& start_ptr_blue=places[0][y];

        if (blue_piece[1]=="  ")
        {
            piece_open=true;
        }
        if(dice==6 && piece_open==false)
        {

            start_ptr_blue=blue_piece[1];
            blue_piece[1]="  ";

        }
        else if(piece_open==false && dice!=6)
        {

        }
        else if(piece_open)
        {
            for(int x=0; x<52; x++)
            {
                for (int y=0; y<4; y++)
                {
                    if(places[x][y]==colour[i])
                    {
                         p=x;
                         c=y;
                    }
                }
            }


                    if(places[p][c]==colour[i] && p>-1 && c>-1)
                    {
                        if(p<51)
                        {
                            if(p+dice < 51)
                            {
                                if(places[p+dice][0]=="G1" || places[p+dice][0]=="R1" || places[p+dice][0]=="Y1" )
                                {
                                    if((p+dice != 0) && (p+dice != 8) && (p+dice != 13) && (p+dice != 21) && (p+dice != 26) && (p+dice != 34) && (p+dice != 39) && (p+dice != 47)  )
                                    {
                                        temp=places[p+dice][0];
                                        places[p+dice][0]=places[p][c];
                                        if(temp=="G1")
                                        {
                                            places[p][c]=green_piece[1];
                                            green_piece[1]=temp;
                                        }
                                        if(temp=="R1")
                                        {
                                            places[p][c]=red_piece[1];
                                            red_piece[1]=temp;
                                        }
                                        if(temp=="Y1")
                                        {
                                            places[p][c]=yellow_piece[1];
                                            yellow_piece[1]=temp;
                                        }


                                    }

                                    else
                                    {
                                        for(int x=0; x<4; x++)
                                        {
                                            if(places[p+dice][x]=="  ")
                                            {
                                                temp=places[p][c];
                                                places[p][c]=places[p+dice][x];
                                                places[p+dice][x]=temp;
                                            }
                                        }
                                    }


                                }
                                else
                                {
                                    temp=places[p][c];
                                    places[p][c]=places[p+dice][0];
                                    places[p+dice][0]=temp;


                                }


                            }
                            else
                            {
                                home_val=p+dice-50-1;
                                if(home_val>5)
                                {

                                }
                                else if(home_val<5)
                                {
                                    temp=places[p][c];
                                    places[p][c]="  ";
                                    blue_home[home_val][0]=temp;
                                }
                                else if(home_val==5)
                                {
                                    win=true;
                                }

                            }


                        }
                    }
                        else
                        {

                            for(int x=0; x<5; x++)
                            {
                                for (int y=0; y<4; y++)
                                {
                                    if(blue_home[x][y]==colour[i])
                                    {
                                         p=x;
                                         c=y;
                                    }
                                }
                            }
                            home_val=p+dice;
                            if(home_val > 5)
                            {

                            }
                            else if(home_val==5)
                            {
                                win=true;
                            }
                            else
                            {
                                temp=blue_home[p][c];
                                blue_home[p][c]=blue_home[home_val][0];
                                blue_home[home_val][0]=temp;
                            }

                }


    }
    }
    if(colour[i]=="Y1")
    {
        if(places[13][0]=="G1" || places[13][0]=="R1" || places[13][0]=="B1")
        {

            for(int x=0; x<4; x++)
            {
                if(places[13][x]=="  ")
                {
                    y=x;
                    break;
                }
            }
        }
        string& start_ptr_yellow=places[13][y];

        if (yellow_piece[1]=="  ")
        {
            piece_open=true;
        }
        if(dice==6 && !piece_open)
        {
            start_ptr_yellow=yellow_piece[1];
            yellow_piece[1]="  ";
        }
        else if(!piece_open && dice!=6)
        {

        }
        else if(piece_open)
        {
            for(int x=0; x<52; x++)
            {
                for (int y=0; y<4; y++)
                {
                    if(places[x][y]==colour[i])
                    {
                         p=x;
                         c=y;
                    }
                }
            }

                    if((places[p][c]==colour[i])&& p>-1 && c>-1)
                    {
                        if(p!=12)
                        {
                            if(p+dice > 51)
                            {
                                counter[i]=1;
                                new_arr_val=p+dice-51-1;
                            }
                            else
                            {
                                new_arr_val=p+dice;
                            }
                            if(new_arr_val > 11 && counter[i]==1)
                            {
                                counter[i]=2;
                            }
                            if((new_arr_val < 12 || new_arr_val>13) && counter[i]<=1)
                            {
                                if(places[new_arr_val][0]=="G1" || places[new_arr_val][0]=="R1" || places[new_arr_val][0]=="B1" )
                                {
                                    if((new_arr_val != 0) && (new_arr_val != 8) && (new_arr_val != 13) && (new_arr_val != 21) && (new_arr_val != 26) && (new_arr_val != 34) && (new_arr_val != 39) && (new_arr_val != 47)  )
                                    {
                                        temp=places[new_arr_val][0];
                                        places[new_arr_val][0]=places[p][c];
                                        if(temp=="G1")
                                        {
                                            places[p][c]=green_piece[1];
                                            green_piece[1]=temp;
                                        }
                                        if(temp=="R1")
                                        {
                                            places[p][c]=red_piece[1];
                                            red_piece[1]=temp;
                                        }
                                        if(temp=="B1")
                                        {
                                            places[p][c]=blue_piece[1];
                                            blue_piece[1]=temp;
                                        }


                                    }

                                    else
                                    {
                                        for(int x=0; x<4; x++)
                                        {
                                            if(places[new_arr_val][x]=="  ")
                                            {
                                                temp=places[p][c];
                                                places[p][c]=places[new_arr_val][x];
                                                places[new_arr_val][x]=temp;
                                            }
                                        }
                                    }


                                }
                                else
                                {
                                    temp=places[p][c];
                                    places[p][c]=places[new_arr_val][0];
                                    places[new_arr_val][0]=temp;
                                }


                            }
                            else
                            {
                                home_val=new_arr_val-11-1;
                                if(home_val>5)
                                {

                                }
                                else if(home_val<5)
                                {
                                    temp=places[p][c];
                                    places[p][c]=yellow_home[home_val][0];
                                    yellow_home[home_val][0]=temp;
                                }
                                else if(home_val==5)
                                {
                                    win=true;
                            //        cout << "Player " << i+1 << " wins";
                                }

                            }


                        }

                }
                else
                {

                    for(int x=0; x<5; x++)
                    {
                        for (int y=0; y<4; y++)
                        {
                            if(yellow_home[x][y]==colour[i])
                            {
                                 p=x;
                                 c=y;
                            }
                        }
                    }
                    home_val=p+dice;
                    if(home_val > 5)
                    {

                    }
                    else if(home_val==5)
                    {
                        win=true;
                     //   cout << "Player "<<i+1<<"wins";
                    }
                    else
                    {
                        temp=yellow_home[p][c];
                        yellow_home[p][c]=yellow_home[home_val][0];
                        yellow_home[home_val][0]=temp;
                    }


                }
        }
    }
    if(colour[i]=="R1")
    {
        if(places[26][0]=="G1" || places[26][0]=="Y1" || places[26][0]=="B1")
        {
            for(int x=0; x<4; x++)
            {
                if(places[26][x]=="  ")
                {
                    y=x;
                    break;
                }
            }
        }
        string& start_ptr_red=places[26][y];
        if (red_piece[1]=="  ")
        {
            piece_open=true;
        }
        if(dice==6 && !piece_open)
        {
            start_ptr_red=red_piece[1];
            red_piece[1]="  ";
        }
        else if(!piece_open && dice!=6)
        {

        }
        else if(piece_open)
        {
            for(int x=0; x<52; x++)
            {
                for (int y=0; y<4; y++)
                {
                    if(places[x][y]==colour[i])
                    {
                         p=x;
                         c=y;
                    }
                }
            }

                    if(places[p][c]==colour[i]&& p>-1 && c>-1)
                    {
                        if(p!=25)
                        {
                            if(p+dice > 51)
                            {
                                counter[i]=1;
                                new_arr_val=p+dice-51-1;
                            }
                            else
                            {
                                new_arr_val=p+dice;
                            }
                            if(new_arr_val > 24 && counter[i]==1)
                            {
                                counter[i]=2;
                            }

                            if((new_arr_val < 25 || new_arr_val>26) && counter[i]<=1)
                            {
                                if(places[new_arr_val][0]=="G1" || places[new_arr_val][0]=="Y1" || places[new_arr_val][0]=="B1" )
                                {
                                    if((new_arr_val != 0) && (new_arr_val != 8) && (new_arr_val != 13) && (new_arr_val != 21) && (new_arr_val != 26) && (new_arr_val != 34) && (new_arr_val != 39) && (new_arr_val != 47)  )
                                    {
                                        temp=places[new_arr_val][0];
                                        places[new_arr_val][0]=places[p][c];
                                        if(temp=="G1")
                                        {
                                            places[p][c]=green_piece[1];
                                            green_piece[1]=temp;
                                        }
                                        if(temp=="B1")
                                        {
                                            places[p][c]=blue_piece[1];
                                            blue_piece[1]=temp;
                                        }
                                        if(temp=="Y1")
                                        {
                                            places[p][c]=yellow_piece[1];
                                            yellow_piece[1]=temp;
                                        }


                                    }

                                    else
                                    {
                                        for(int x=0; x<4; x++)
                                        {
                                            if(places[new_arr_val][x]=="  ")
                                            {
                                                temp=places[p][c];
                                                places[p][c]=places[new_arr_val][x];
                                                places[new_arr_val][x]=temp;
                                            }
                                        }
                                    }


                                }
                                else
                                {
                                    temp=places[p][c];
                                    places[p][c]=places[new_arr_val][0];
                                    places[new_arr_val][0]=temp;
                                }


                            }
                            else
                            {
                                home_val=new_arr_val-24-1;
                                if(home_val>5)
                                {

                                }
                                else if(home_val<5)
                                {
                                    temp=places[p][c];
                                    places[p][c]=red_home[home_val][0];
                                    red_home[home_val][0]=temp;
                                }
                                else if(home_val==5)
                                {
                                    win=true;
             //                       cout << "Player "<< i+1 << " win"<<endl;
                                }

                            }


                        }

                }
                else
                {

                    for(int x=0; x<5; x++)
                    {
                        for (int y=0; y<4; y++)
                        {
                            if(red_home[x][y]==colour[i])
                            {
                                 p=x;
                                 c=y;
                            }
                        }
                    }
                    home_val=p+dice;
                    if(home_val > 5)
                    {

                    }
                    else if(home_val==5)
                    {
                        win=true;
               //         cout << "Player "<<i+1<<"wins";
                    }
                    else
                    {
                        temp=red_home[p][c];
                        red_home[p][c]=red_home[home_val][0];
                        red_home[home_val][0]=temp;
                    }


                }

        }
    }
    if(colour[i]=="G1")
    {
        if(places[39][0]=="R1" || places[39][0]=="Y1" || places[39][0]=="B1")
        {


            for(int x=0; x<4; x++)
            {
                if(places[39][x]=="  ")
                {
                    y=x;
                    break;
                }
            }
        }
        string& start_ptr_green=places[39][y];
        if (green_piece[1]=="  ")
        {
            piece_open=true;
        }
        if(dice==6 && !piece_open)
        {
            start_ptr_green=green_piece[1];
            green_piece[1]="  ";
        }
        else if(!piece_open && dice!=6)
        {

        }
        else if(piece_open)
        {
            for(int x=0; x<52; x++)
            {
                for (int y=0; y<4; y++)
                {
                    if(places[x][y]==colour[i])
                    {
                         p=x;
                         c=y;
                    }
                }
            }

                    if(places[p][c]==colour[i]&& p>-1 && c>-1)
                    {
                        if(p!=38)
                        {
                            if(p+dice > 51)
                            {
                                counter[i]=1;
                                new_arr_val=p+dice-51-1;
                            }
                            else
                            {
                                new_arr_val=p+dice;
                            }
                            if(new_arr_val > 37 && counter[i]==1)
                            {
                                counter[i]=2;
                            }
                            if((new_arr_val < 38 || new_arr_val>39) && counter[i]<=1)
                            {
                                if(places[new_arr_val][0]=="Y1" || places[new_arr_val][0]=="R1" || places[new_arr_val][0]=="B1" )
                                {
                                    if((new_arr_val != 0) && (new_arr_val != 8) && (new_arr_val != 13) && (new_arr_val != 21) && (new_arr_val != 26) && (new_arr_val != 34) && (new_arr_val != 39) && (new_arr_val != 47)  )
                                    {
                                        temp=places[new_arr_val][0];
                                        places[new_arr_val][0]=places[p][c];
                                        if(temp=="R1")
                                        {
                                            places[p][c]=red_piece[1];
                                            red_piece[1]=temp;
                                        }
                                        if(temp=="B1")
                                        {
                                            places[p][c]=blue_piece[1];
                                            blue_piece[1]=temp;
                                        }
                                        if(temp=="Y1")
                                        {
                                            places[p][c]=yellow_piece[1];
                                            yellow_piece[1]=temp;
                                        }


                                    }

                                    else
                                    {
                                        for(int x=0; x<4; x++)
                                        {
                                            if(places[new_arr_val][x]=="  ")
                                            {
                                                temp=places[p][c];
                                                places[p][c]=places[new_arr_val][x];
                                                places[new_arr_val][x]=temp;
                                            }
                                        }
                                    }


                                }
                                else
                                {
                                    temp=places[p][c];
                                    places[p][c]=places[new_arr_val][0];
                                    places[new_arr_val][0]=temp;
                                }


                            }
                            else
                            {
                                home_val=new_arr_val-37-1;
                                if(home_val>5)
                                {

                                }
                                else if(home_val<5)
                                {
                                    temp=places[p][c];
                                    places[p][c]=green_home[home_val][0];
                                    green_home[home_val][0]=temp;
                                }
                                else if(home_val==5)
                                {
                                    win=true;
          //                          cout << "Player "<< i+1 << " win"<<endl;
                                }

                            }


                        }

                }
        }
        else
                {

                    for(int x=0; x<5; x++)
                    {
                        for (int y=0; y<4; y++)
                        {
                            if(green_home[x][y]==colour[i])
                            {
                                 p=x;
                                 c=y;
                            }
                        }
                    }
                    home_val=p+dice;
                    if(home_val > 5)
                    {

                    }
                    else if(home_val==5)
                    {
                        win=true;
            //            cout << "Player "<<i+1<<"wins";
                    }
                    else
                    {
                        temp=green_home[p][c];
                        green_home[p][c]=green_home[home_val][0];
                        green_home[home_val][0]=temp;
                    }


                }

    }
}
int dice_roll()
{
        int dice;
        srand(time(0));
        dice = rand()%6 + 1;
        return dice;
}
void colour_update(int no_of_players, string colour[], string green_piece[], string yellow_piece[], string red_piece[], string blue_piece[])
{

    for(int i = 0; i<no_of_players ; i++)
    {
        if(colour[i]=="B1")//printing b1
        {
            blue_piece[1] = "B1";
        }
    }
    for(int i = 0; i<no_of_players ; i++)
    {
        if(colour[i]=="Y1")//prinitng y1
        {
            yellow_piece[1] = "Y1";
        }
    }
    for(int i = 0; i<no_of_players ; i++)
    {
        if(colour[i]=="G1")
        {
            green_piece[1] = "G1";
        }
    }
    for(int i = 0; i<no_of_players ; i++)
    {
        if(colour[i]=="R1")
        {
            red_piece[1] = "R1";
        }
}
}



int main()
{

    system("color f0");
   //Declaration and Initialization
    int no_of_players=0;
    string player_names[4]={};
    string colour[4]={};
    int dice=0;
    bool win=false;
    //Declaration and Initialization of pieces
    string blue_piece[5]={" ", "  ", "  ", "  ", "  "};
    string yellow_piece[5]={" ", "  ", "  ", "  ", "  "};
    string green_piece[5]={" ", "  ", "  ", "  ", "  "};
    string red_piece[5]={" ", "  ", "  ", "  ", "  "};
    string blue_home[5][4]={};
    string green_home[5][4]={};
    string red_home[5][4]={};
    string yellow_home[5][4]={};
    string places[52][4]={"  "};
    for(int p=0; p<5; p++)
    {
        for (int c=0; c<4; c++)
        {
            blue_home[p][c]="  ";
        }
    };
    for(int p=0; p<5; p++)
    {
        for (int c=0; c<4; c++)
        {
            green_home[p][c]="  ";
        }
    };
    for(int p=0; p<5; p++)
    {
        for (int c=0; c<4; c++)
        {
            red_home[p][c]="  ";
        }
    };
    for(int p=0; p<5; p++)
    {
        for (int c=0; c<4; c++)
        {
            yellow_home[p][c]="  ";
        }
    };
    for(int p=0; p<52; p++)
    {
        for (int c=0; c<4; c++)
        {
            places[p][c]="  ";
        }
    };
    int line=0;
    int counter[4]={0, 0, 0, 0};

   //PROCESS
    player_details(no_of_players, player_names, colour);
    colour_update(no_of_players, colour, green_piece, yellow_piece, red_piece, blue_piece);


    char begingame='B';
    do
    {
        cout << "\nPress B to begin the game"<<endl;
        cin >> begingame;
    }while(begingame!='B' && begingame!='b');

    do
    {
        for (int i=0; i<no_of_players; i++)
        {
            system("cls");
            ludoboard(line, no_of_players, colour, places, blue_piece, yellow_piece, green_piece, red_piece, yellow_home, red_home, green_home, blue_home);
            char d;
            do
            {
                cout<<"\n....Player"<<i+1<<" press D to roll dice...."<<endl;
                cin>>d;
            }while(d!='D'&& d!='d');
            dice=dice_roll();
            cout<<"Player "<<i+1<<" your score is "<<dice<<endl;
            place_edits(places, colour, i, blue_home, yellow_home, red_home, green_home, green_piece, red_piece, blue_piece, yellow_piece, dice, win, counter);
            if (win==true)
            {
                cout <<"Player " << i+1 << " wins";
                break;
            }
            char c;
            cout << "\nPress any to continue\n";
            cin >> c;
            cout << endl;
        };
    }while(win==false);


}
