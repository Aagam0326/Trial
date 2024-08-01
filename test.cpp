#include <iostream>
#include <cstring>

using namespace std;

struct Product {
    int product_id;
    char product_name[50];
    int product_qty;
    float product_price;
    float product_total_price;
    Product* next;
};

class ProductList {
private:
    Product* head;

public:
    ProductList() : head(nullptr) {}

    void purchaseProduct(int pid, const char* pname, int qty, float price) {
        Product* newProduct = new Product;
        newProduct->product_id = pid;
        strcpy(newProduct->product_name, pname);
        newProduct->product_qty = qty;
        newProduct->product_price = price;
        newProduct->product_total_price = qty * price;
        newProduct->next = nullptr;

        if (head == nullptr) {
            head = newProduct;
        } else {
            Product* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newProduct;
        }
    }

    void printPurchasedProducts() {
        cout << "=========== Purchased Output Product Information =============" << endl;
        cout << "PID\tPName\tPQty\tPprice\tPTprice" << endl;
        Product* temp = head;
        while (temp != nullptr) {
            cout << temp->product_id << "\t" << temp->product_name << "\t" << temp->product_qty << "\t"
                 << temp->product_price << "\t" << temp->product_total_price << endl;
            temp = temp->next;
        }
    }

    void findProductById(int pid) {
        Product* temp = head;
        cout << "PID\tPName\tPQty\tPprice\tPTprice" << endl;
        while (temp != nullptr) {
            if (temp->product_id == pid) {
                cout << temp->product_id << "\t" << temp->product_name << "\t" << temp->product_qty << "\t"
                     << temp->product_price << "\t" << temp->product_total_price << endl;
                break;
            }
            temp = temp->next;
        }
    }

    void deleteProductById(int pid) {
        Product* temp = head;
        Product* prev = nullptr;
        while (temp != nullptr) {
            if (temp->product_id == pid) {
                if (prev == nullptr) {
                    head = temp->next;
                } else {
                    prev->next = temp->next;
                }
                delete temp;
                break;
            }
            prev = temp;
            temp = temp->next;
        }
    }

    ~ProductList() {
        while (head != nullptr) {
            Product* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    int n, pid, qty;
    char pname[50];
    float price;
    char choice;

    ProductList productList;

    cout << "How many products you want to purchase: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "Enter product_id, product_name, product_qty, product_price: ";
        cin >> pid >> pname >> qty >> price;
        productList.purchaseProduct(pid, pname, qty, price);
    }

    productList.printPurchasedProducts();

    cout << "Do you want to find individual product information (y/n)?: ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        int option;
        cout << "How do you want to find product information by ID or by Name: 1 for ID and 2 for Name: ";
        cin >> option;
        if (option == 1) {
            cout << "Enter product Id: ";
            cin >> pid;
            productList.findProductById(pid);
        }
    }

    cout << "Do you want to delete product record (y/n): ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        int option;
        cout << "How do you want to delete record by ID or By name? 1 for by ID and 2 for by Name: ";
        cin >> option;
        if (option == 1) {
            cout << "Enter Product ID: ";
            cin >> pid;
            productList.deleteProductById(pid);
            cout << "============= Updated Record ============\n";
            productList.printPurchasedProducts();
        }
    }

    return 0;
}
