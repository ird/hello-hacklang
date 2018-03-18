<?hh
namespace ird\hello;

class Box<T> {
    public function __construct(private T $elem) {}
    
    public function get(): T {
        return $this->elem;
    }
}

function main() : void {
    echo "Hello World\n";
    $box = new Box(50);
    echo "Box contains {$box->get()}\n";
}

main();