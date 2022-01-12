#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H


class administrator
{
	public:
        administrator();
        virtual ~administrator();


        void addProducts();
        void administrators();
        void buyproducts(int ProductID, int quantity);
        void customers();
        void deleteProduct(int ProductID);
        void displayProducts();
        void modifyProductInfo(int ProductID);
        void showProductInfo(int ProductID);
	protected:

	private:
};

#endif // ADMINISTRATOR_H
