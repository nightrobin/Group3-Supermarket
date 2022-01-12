#ifndef CUSTOMER_H
#define CUSTOMER_H


class customer
{
	public:
        customer();
        virtual ~customer();

        void buyproducts(int ProductID, int quantity);
        void customers();
        void displayProducts();
        void showProductInfo(int ProductID);

	protected:

	private:
};

#endif // CUSTOMER_H
