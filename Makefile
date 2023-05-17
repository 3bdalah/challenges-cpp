.PHONY: clean All

All:
	@echo "----------Building project:[ A_Bear_and_Big_Brother - Debug ]----------"
	@cd "A_Bear_and_Big_Brother" && "$(MAKE)" -f  "A_Bear_and_Big_Brother.mk"
clean:
	@echo "----------Cleaning project:[ A_Bear_and_Big_Brother - Debug ]----------"
	@cd "A_Bear_and_Big_Brother" && "$(MAKE)" -f  "A_Bear_and_Big_Brother.mk" clean
