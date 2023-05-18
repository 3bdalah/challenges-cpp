.PHONY: clean All

All:
	@echo "----------Building project:[ A_Petya_and_Strings - Debug ]----------"
	@cd "A_Petya_and_Strings" && "$(MAKE)" -f  "A_Petya_and_Strings.mk"
clean:
	@echo "----------Cleaning project:[ A_Petya_and_Strings - Debug ]----------"
	@cd "A_Petya_and_Strings" && "$(MAKE)" -f  "A_Petya_and_Strings.mk" clean
