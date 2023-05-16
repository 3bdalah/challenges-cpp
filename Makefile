.PHONY: clean All

All:
	@echo "----------Building project:[ week-01-2 - Debug ]----------"
	@cd "week-01-2" && "$(MAKE)" -f  "week-01-2.mk"
clean:
	@echo "----------Cleaning project:[ week-01-2 - Debug ]----------"
	@cd "week-01-2" && "$(MAKE)" -f  "week-01-2.mk" clean
