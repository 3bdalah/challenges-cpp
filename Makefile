.PHONY: clean All

All:
	@echo "----------Building project:[ A_Black_Square - Debug ]----------"
	@cd "A_Black_Square" && "$(MAKE)" -f  "A_Black_Square.mk"
clean:
	@echo "----------Cleaning project:[ A_Black_Square - Debug ]----------"
	@cd "A_Black_Square" && "$(MAKE)" -f  "A_Black_Square.mk" clean
