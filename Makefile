.PHONY: clean All

All:
	@echo "----------Building project:[ A_Beautiful_Matrix - Debug ]----------"
	@cd "A_Beautiful_Matrix" && "$(MAKE)" -f  "A_Beautiful_Matrix.mk"
clean:
	@echo "----------Cleaning project:[ A_Beautiful_Matrix - Debug ]----------"
	@cd "A_Beautiful_Matrix" && "$(MAKE)" -f  "A_Beautiful_Matrix.mk" clean
