#include <iostream>  
#include <iomanip>  
#include <string>  
#include <filesystem>  
#include <windows.h>  
#include <memory> // ��Ҫ�������ͷ�ļ���ʹ������ָ��  
#include "Menu.h"  

using namespace std;

void Menu::menu() {
    int choice2 = 1;
    string newGameMenu = "   1.�µ���Ϸ  2.��ȡ�浵  3.�˳���Ϸ";
    for (int i = 0; i < newGameMenu.length(); i++) {
        Sleep(50);
        cout << newGameMenu[i];
    }
    cout << endl << endl << '\t' << '\t' << '\t' << '\t' << "   ";

    // ʹ������ָ��  
    shared_ptr<Game> game = nullptr; // ��ʼ������ָ��  

    do {
        int choice1 = 0;
        cin >> choice1;
        while (choice1 != 1 && choice1 != 2 && choice1 != 3) {
            cout << "Error! Please enter 1-3" << endl;
            cin >> choice1;
        }
        switch (choice1) {
        case 1:
            cout << "Please register your username:";
            cin >> username;
            user_adress = base_adress + "\\user\\" + username + "\\basic.txt";

            // ֱ��ʹ�� shared_ptr �� reset ����  
            game = make_shared<Game>(); // �����µ� Game ʵ��  
            game->game();
            break;

        case 2: {
            cout << "Please enter your username:";
            cin >> username;
            user_adress = base_adress + "\\user\\" + username + "\\basic.txt";

            // �����µ� Game ʵ��  
            game = make_shared<Game>();

            ifstream ifs(user_adress, ios::binary);
            ifs.read(reinterpret_cast<char*>(game.get()), sizeof(Game)); // ʹ�� get() ��ȡ��ָ��  
            ifs.close();
            game->game();
            break;
        }
        case 3:
            if (game != nullptr) {
                filesystem::create_directories(user_adress); // �����û�Ŀ¼  
                ofstream ifs_a(user_adress, ios::binary | ios::trunc);
                ifs_a.write(reinterpret_cast<char*>(game.get()), sizeof(Game)); // �����û�������Ϣ  
                ifs_a.close();
                choice2 = 0; // �˳���Ϸ  
            }
        }
    } while (choice2);
}