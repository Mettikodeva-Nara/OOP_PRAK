#include "linked_list.h"

using namespace std;

// to test the code
// int main(int argc, char **argv){
//     // LL mahasiswa("162012233034", "Nara Atthama");
//     // mahasiswa.insert("162012233005", "Holina Natalia");
//     // mahasiswa.insert("162012233009", "Zhilaan A");
//     // mahasiswa.insert("162012233036", "Zaky Syah");
//     // mahasiswa.insert("162012233035", "Azhar Dzakwan");
//     // mahasiswa.printList();
//     // cout<< "length : "<<mahasiswa.length()<<endl;
//     // mahasiswa.remove("162012233009");
//     // mahasiswa.printList();
//     // mahasiswa.destroy_list();

//     // LL list("123", "buku1");
//     // list.insert("124","buku2");
//     // list.printList();
//     // list.destroy_list();
//     LL list;
//     cout << "length : " << list.length() <<endl;
//     list.set_head("123","nara");
//     list.printList();
//     list.insert("1243", "naara");
//     list.printList();
//     list.set_head("1234", "naraa");
//     list.printList();

//     list.destroy_list();

//     return 0;
// }

LL::LinkedList(){
    HEAD = NULL;
}

LL::LinkedList(string t_id, string t_nama){
    node_t *temp =  new node_t;
    temp->next = NULL;
    temp->id = t_id;
    temp->nama =  t_nama;
    HEAD = temp;
}

void LL::set_head(string t_id, string t_nama){
    node_t * new_node = new node_t;
    if(HEAD !=NULL)
        new_node->next = HEAD;
    new_node->id = t_id;
    new_node->waktu_masuk = waktu_masuk;
    HEAD = new_node;
}


bool LL::find_id(string id){
    node_t * temp = HEAD;
    for( int i = 0; i <length(); i++){
        if(temp->id == id)
            return true;
    }
    return false;
}

void LL::insert(string t_id, string t_nama){
    node_t *new_node = new node_t;
    new_node->next = NULL;
    new_node->id = t_id;
    new_node->nama = t_nama;
    node_t* temp = HEAD;
    while(temp->next !=  NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}


void LL::printList(){
    node_t *temp = HEAD;
    cout<< " == isi list == "<<endl;
    cout <<"no\tid\tnama\t"<< endl;
    int count = 0;
    while(temp !=  NULL){
        cout<<count+1<<"\t"<<temp->id<< "\t" << temp->nama<< endl; 
        temp = temp->next;
        count++;
    }
    cout<<endl;
}

void LL::destroy_list(){
    node_t *temp= HEAD;
    node_t *temp2;
    while (temp != NULL)
    {
        temp2 = temp;
        temp =  temp->next;
        cout << temp2->id <<"  node destroyed" << endl;
        delete temp2;
    }
    cout << "finished destroying list"<< endl;
}

void LL::remove(string t_id){
    node_t *iter = HEAD;
    node_t *simpan;
    while(iter != NULL){
        if(!iter->id.compare(t_id)){
            cout<<simpan->id<<" -> "<<iter->next->id << endl;
            simpan->next = iter->next;
            delete iter;
            break;
        }
        simpan = iter;
        iter = iter->next;
    }
}

int LL::length(){
    int count = 0;
    node_t *temp = HEAD;
    while(temp != NULL){
        temp = temp->next;
        count++;
    }
    return count;
}