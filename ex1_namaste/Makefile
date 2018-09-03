NODENAME = hello.node
NAME = index
JSNAME = $(NAME).js

binding:
	node-gyp configure build
	mkdir node_modules
	cp build/Release/$(NODENAME) node_modules/.
	zip -r $(NAME).zip $(JSNAME) node_modules/

clean:
	rm -Rf build
	rm -f $(NODENAME)
	rm -rf node_modules
	rm -f $(NAME).zip
