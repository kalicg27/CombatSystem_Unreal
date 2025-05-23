#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <fstream>
#include <string>

using namespace std;

void print_deque(const deque<string>& tasks){
    for (const string& i :tasks){
        cout<<i<<endl;
    }
};
void print_stack(stack<string> s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}

int main(){
    //pair<int, int>
    // pair<int, int> pos_elm = {3,6};
    // cout << "X: "<<pos_elm.first<< ", Y: "<<pos_elm.second<<endl;

    // // vectors(1container)
    // vector<int> scores;
    // scores.push_back(50);
    // scores.push_back(444);
    // scores.push_back(45);
    // scores.push_back(454433);
    // int player;
    // for (int i = 0; i<scores.size(); i++){
    //     player = i+1;
    //     cout <<"Player "<<player<<" value is "<< scores[i]<<endl;
        
    // }
    // // for (int i: scores){
    // //     cout << "all: "<<i<< endl;
    // // }
    // int topScore = scores[0];
    // int topPlayer = 1;
    // for (int i=1; i<scores.size();i++){
    //     if (scores[i]> topScore){
    //         topScore = scores[i];
    //         topPlayer = i+1; 
    //     }
    // }
    // cout << "Top score of the game is player number: "<<topPlayer<<" with score of: "<<topScore<< endl;


    //iterations

    // vector<string> cart = {"phone", "mobile", "anything"};
    // for (auto it = cart.begin(); it !=cart.end();it++){
    //     cout<<*it<<endl;

    // }

    //deletion 

    // vector<string> order = {"pen", "erase","pencil"};
    // order.erase(order.begin()+1);

    

    // for (const string&item: order){
    //     cout<<item<<endl;

    // }
    // for(string i:order){
    //     cout<<i<<endl;
    // }
    
    // vector<string> files= {"elm1","elm2","elm3"};
    // files.push_back("elm5");
    // files.push_back("elm4");
    // for (const string&item: files){
    //     cout<<"First period you have list: "<<item<<endl;
    // }
    // files.erase(files.begin()+4);
    // string deleted = files[4];
    // cout<<"You delete this guy: "<<deleted<<endl;

    // for (const string&item: files){
    //     cout <<"You have left : "<<item<<endl;
    // }

    //repeat
    // vector<string> order_v= {"nice stuff","fjdkfjdk"};
    // list<string> order_l={"goes"};
    // deque<string> order_d= {"task1","task2","task3"};
    // order_d.push_back("task4");
    // print_tasks(order_d);
    // cout<<"\nLast task deleted\n"<<endl;
    // order_d.pop_back();
    // print_tasks(order_d);

    // stack<string> plates;
    // plates.push("task1");
    // plates.push("Task33");
    // plates.push("task4");

    // print_stack(plates);
    
    // queue<string> printQueue;

    // printQueue.push("Word1");
    // printQueue.push("word2");
    // printQueue.push("Document3");

    // cout<<"Printings: "<<printQueue.front()<<endl;
    // printQueue.pop();

    // cout<<"Next in line: "<<printQueue.front()<<endl;

    ofstream fout("highscore.txt");

    if (fout.is_open()){
        fout<<"Kamran - 5000"<<endl;
        fout.close();
        cout<<"High score saved"<<endl;

    }else{
        cout<<"Failed to open file"<<endl;
    }

    ifstream fin("highscore.txt");
    string line;
    
    if(fin.is_open()){
        while(getline(fin, line)){
            cout<<"Score: "<<line<<endl;
        }
        fin.close();
    }else{
        cout<<"File not found"<<endl;
    }
    




    return 0;

}
