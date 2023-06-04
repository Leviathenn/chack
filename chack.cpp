
//Made By BioShot\\



#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <fstream>
#include <conio.h>
#include <io.h>
#include <string>
#define _CRT_SECURE_NO_WARNINGS
#define cft int (char a){return sizeof(a) / sizeof(*a)}



using namespace std;
string convertBFToString(char* a, int size)
{
    int i;
    string s = "";
    for (i = 0; i < size; i++) {
        s = s + a[i];
    }
    return s;
}

BOOL isRunning(LPCWSTR pName) {
    HWND hwnd;
    hwnd = FindWindow(NULL, pName);
    if (hwnd != 0) {
        return true;
    }
    else {
        return false;
    }
}


INT main()
{
    
    HANDLE hProcess;
    HANDLE hThread;
    STARTUPINFO si;
    PROCESS_INFORMATION pi;
    DWORD dwProcessId = 0;
    DWORD dwThreadId = 0;
    //Clear the values because i want to...\\

    ZeroMemory( &si, sizeof(si) );
    ZeroMemory(&pi, sizeof(pi));

    BOOL bCreateProcess = NULL;
    BOOL hadToMakeProcess = false;
   
    BOOL bNpProcess = isRunning(L"notepad.exe");
    if (bNpProcess != 0) {
        //Create the process
        hadToMakeProcess = true;
        printf("(-) Atempting to run process notpad.exe with low prioity...\n");
        bCreateProcess = CreateProcess(
            L"C:\\Windows\\System32\\notepad.exe",
            NULL,
            NULL,
            NULL,
            FALSE,
            0,
            NULL,
            NULL,
            &si,
            &pi
        );
    }
    else {


   

    if (!bCreateProcess && hadToMakeProcess == true) {
        printf("(-) Error creating the process! %ld",GetLastError());
    }else{
        
        ofstream ofstream_ob("notepad.exe.log",ios::out);
        ofstream_ob << "Created Process Notepad.exe. Process Info: "<<endl;
        ofstream_ob << "Process ID -> " << pi.dwProcessId << endl;
        ofstream_ob << "Thread ID -> " << pi.dwThreadId << endl;
        ofstream_ob << "GetProcessID -> " << GetProcessId(pi.hProcess) << endl;
        ofstream_ob << "GetThreadID -> " << GetThreadId(pi.hThread) << endl;
        cout << "(-) Created Process Notepad.exe. Process Info: " << endl; 
        cout << "(-) Process ID -> " << pi.dwProcessId << endl;
        cout << "(-) Thread ID -> " << pi.dwThreadId << endl;
        cout << "(-) GetProcessId _> " << GetProcessId(pi.hProcess) << endl;
        cout << "(-) GetThreadID -> " << GetThreadId(pi.hThread) << endl;
       
        for (;; ) {
           
            int count = 0;
            //Loop through the window parsing...\\
            
            system("cls");
            HWND hnd;
            HWND edithnd;
            CHAR* buf;
            CHAR* checkStr;
            hnd = FindWindow(L"Notepad", 0);
            if (hnd == NULL)
                printf("Handle not found");
            edithnd = FindWindowEx(hnd, 0, L"Edit", 0);
            buf = (char*)calloc(200, 1024);
            //printf("%d", sizeof(buf));
            SendMessage(edithnd, WM_GETTEXT, 10000, (LPARAM)buf);
            checkStr = (char*)"chack::exit()";
            if (buf == checkStr) {
                exit(EXIT_SUCCESS);
            }
            else {
                cout << "(-) [" << count << "]: Parsing input: " << buf << endl;
               


                const size_t length = sizeof(buf) / sizeof(*buf);

                ofstream_ob << "(-) [" << count << "]: Parsing input: ";

                //cout << length;
                char bufferA[length + 1];
                char* buffer;
                string sBuffer;
                for (int i = 0; i <= length; i++) {
                    if (i == length) {
                        ofstream_ob << buf[i] << endl;
                      
                    }
                    else {
                        ofstream_ob << buf[i];
                        
                    }
                    //cout << bufferA[i];


                }
                count++;





                //   cout << buffer;




                   //ofstream_ob << "(-) Readss " << sBuffer << " on read-count " << count << endl;
                  // wprintf(L"%s", buf);
                
                
            }

           Sleep(500);
           
       }
        WaitForSingleObject(pi.hProcess, INFINITE);
        CloseHandle(pi.hThread);
        ofstream_ob.close();
       

        }

    }
    return EXIT_SUCCESS;
}