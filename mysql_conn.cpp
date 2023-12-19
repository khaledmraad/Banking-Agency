#include <iostream>
#include <mysql/mysql.h>
#include <sstream>

using namespace std;

int main(){
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;
    conn=mysql_real_connect(mysql_init(0),"127.0.0.1","root","","test",0,NULL,0);

    
    if (conn){
        cout<<"connected\n";


        int qstate=mysql_query(conn,"SELECT name FROM users");
        
        if (!qstate){
            res = mysql_store_result(conn);

            while (row= mysql_fetch_row(res)){
                cout<<endl<<row[0]<<endl;
            }
        }
    }
    
    
    
    int qstate=0;

    stringstream ss;
    string name="mrad";
    ss<<"INSERT INTO users(name) VALUES ('"<<name<<"')";



    string query=ss.str();
    const char* q=query.c_str();

    qstate=mysql_query(conn,q);

    


    if (!qstate){
        cout<<"INSERTED";
    }
    else{
        cout<<"slksjdcnlskjdnc";
    }
    return 0;

}