.PHONY: clean All

All:
	@echo "----------Building project:[ A_Word_Capitalization - Debug ]----------"
	@cd "A_Word_Capitalization" && "$(MAKE)" -f  "A_Word_Capitalization.mk"
clean:
	@echo "----------Cleaning project:[ A_Word_Capitalization - Debug ]----------"
	@cd "A_Word_Capitalization" && "$(MAKE)" -f  "A_Word_Capitalization.mk" clean
