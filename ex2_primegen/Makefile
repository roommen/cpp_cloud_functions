NODENAME = prime.node
NAME = index
JSNAME = $(NAME).js

binding:
	node-gyp configure build
	cp build/Release/$(NODENAME) .
	zip -r $(NAME).zip $(JSNAME) $(NODENAME)

clean:
	rm -Rf build
	rm -f $(NODENAME)
	rm -f $(NAME).zip
