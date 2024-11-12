class Sales_item{
    public:
        bool same_isbn(const Sales_item &rhs) const
        {
            return isbn==rhs.isbn;
        }
        void add_units(unsigned units, double rev)
        {
            units_sold+=units;
            revenue+=revenue;
        }
        void print_item() const;
        Sales_item(): units_sold(0), revenue(0) {}
        Sales_item(const string isbn_new, unsigned units, double rev):
            isbn(isbn_new), units_sold(units), revenue(rev){}
    private:
        string isbn;
        unsigned units_sold;
        double revenue;
};
