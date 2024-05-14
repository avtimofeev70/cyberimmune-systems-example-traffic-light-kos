d-build:
	docker build ./ -t kos:1.1.1.40u20.04

develop:
	docker run --net=host --volume="`pwd`:/data" --name traffic-light-kos --user user -it --rm kos:1.1.1.40u20.04 bash


build:
	./cross-build.sh

sim:
	./cross-build-sim.sh

clean:
	rm -rf build