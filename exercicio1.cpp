#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ItemSet{
        
    public:
    vector<string> itens;
    
    /*vector<string> getItens() {
        return itens;
    };*/
    void inserir(string _item) {
        //to do
        itens.push_back(_item);
    }
    void excluir(string _item) {
        //to do
    }

    void imprimir() {
        for(auto it=itens.begin(); it != itens.end(); it++) {
            cout << *it << endl;
        }

    }
};

int main() {
    ItemSet conjuntos;

    conjuntos.inserir("Item A");
    conjuntos.inserir("Item B");
    conjuntos.inserir("Item C");
    conjuntos.imprimir();
    
    return 0;

}