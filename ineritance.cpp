 netItemocessheckOut(Member* member) {
	         if (!isAvailable()) {
				             throw runtime_error("Transaction Failed: \"" + title + "\" is already checked out.");
			 }
			         currentBorrower = member;
 }
 
     void processReturn() {
     	        if (isAvailable()) {
     	        	            throw runtime_error("Transaction Failed: \"" + title + "\" was not checked out.");
				 }
				         currentBorrower = nullptr;
	 }
	 
	     virtual void displayDetails() const {
	     	        cout << "ID: " << itemID << " | Title: " << title << "\n"
	     	                     << "Status: " << (isAvailable() ? "Available" : "Checked Out") << "\n";
		 }
		 };
		 
		 // Derived Class: Book
		 class Book : public LibraryItem {
		 	private:
		 		    string author;
		 		    
		 		    public:
		 		    	    Book(string t, int id, string auth) : LibraryItem(t, id), author(auth) {}
		 		    	    
		 		    	        string getItemType() const override { return "Book"; }
		 		    	        
		 		    	            void displayDetails() const override {
		 		    	            	        cout << "[" << getItemType() << "]\n";
		 		    	            	                LibraryItem::displayDetails();
		 		    	            	                        cout << "Author: " << author << "\n\n";
									 }
		 };
		 
		 // Derived Class: Journal
		 class Journal : public LibraryItem {
		 	private:
		 		    int volume;
		 		    
		 		    public:
		 		    	    Journal(string t, int id, int vol) : LibraryItem(t, id), volume(vol) {}
		 		    	    
		 		    	        string getItemType() const override { return "Journal"; }
		 		    	        
		 		    	            void displayDetails() const override {
		 		    	            	        cout << "[" << getItemType() << "]\n";
		 		    	            	                LibraryItem::displayDetails();
		 		    	            	                        cout << "Volume: " << volume << "\n\n";
									 }
		 };
		 
		 // Member Class managing borrowed items
		 class Member {
		 	private:
		 		    string name;
		 		        int memberID;
		 		            vector<LibraryItem*> borrowedItems;
		 		            
		 		            public:
		 		            	    Member(string n, int id) : name(n), memberID(id) {}
		 		            	    
		 		            	        string getName() const { return name; }
		 		            	        
		 		            	            void borrowItem(LibraryItem* item) {
		 		            	            	        try {
															             item->processCheckOut(this); // Might throw runtime_error
															                         borrowedItems.push_back(item);
															                                     cout << name << " successfully borrowed \"" << item->getTitle() << "\".\n";
														 } 
														         catch (const runtime_error& e) {
														         	            cout << e.what() << "\n"; // Handle error safely without crashing
																 }
											 }
											 
											     void returnItem(LibraryItem* item) {
											     	        try {
											     	        	            item->processReturn(); // Might throw runtime_error
											     	        	                        
											     	        	                                    // Remove from member's active list
											     	        	                                                for (auto it = borrowedItems.begin(); it != borrowedItems.end(); ++it) {
																													                 if (*it == item) {
																																		                     borrowedItems.erase(it);
																																		                                         break;
																																	 }
																												 }
																												             cout << name << " successfully returned \"" << item->getTitle() << "\".\n";
															 } 
															         catch (const runtime_error& e) {
															         	            cout << e.what() << "\n";
																	 }
												 }
		 };
		 
		 int main() {
		 	    // 1. Setup inventory (Polymorphism using Base Class Pointers)
		 	        vector<LibraryItem*> inventory;
		 	            inventory.push_back(new Book("The C++ Programming Language", 101, "Bjarne Stroustrup"));
		 	                inventory.push_back(new Journal("IEEE Software", 202, 41));
		 	                
		 	                    // 2. Setup Library Members
		 	                        Member alice("Alice Smith", 5001);
		 	                            Member bob("Bob Jones", 5002);
		 	                            
		 	                                cout << "=== Starting Transactions ===\n";
		 	                                
		 	                                    // Alice borrows the book -> Should Succeed
		 	                                        alice.borrowItem(inventory[0]);
		 	                                        
		 	                                            // Bob tries to borrow the SAME book -> Should Fail safely via Exception
		 	                                                bob.borrowItem(inventory[0]);
		 	                                                
		 	                                                    // Bob borrows the journal -> Should Succeed
		 	                                                        bob.borrowItem(inventory[1]);
		 	                                                        
		 	                                                            // Bob tries to return the book he never borrowed -> Should Fail safely
		 	                                                                bob.returnItem(inventory[0]);
		 	                                                                
		 	                                                                    // Alice returns the book -> Should Succeed
		 	                                                                        alice.returnItem(inventory[0]);
		 	                                                                        
		 	           l ude <vector>
						#include <stdexcept">
						
						using namespace std;
						
						// Forward declaration of Member class so LibraryItem can reference it
						class Member;
						
						// Abstract Base Class (Interface)
						class LibraryItem {
						protected:
						    string title;
							    int itemID;
								    Member* currentBorrower; // Tracks who has the item (nullptr if available)
									
									public:
									    LibraryItem(string t, int id) : title(t), itemID(id), currentBorrower(nullptr) {}
										    virtual ~LibraryI                                                                cout << "\n=== Final Inventory Status ===\n";
		 	                                                                                for (const auto& item : inventory) {
		 	                                                                                	        item->displayDetails();
																							 }
																							 
																							     // Clean up dynamic memory
					#in																		         for (auto& item : inventory) {
																							         	        delete item;
																									 }
																									     
																									         return 0;
		 }
		 
																																	 }
																												 }
														 }
			 }
 }I   Cla